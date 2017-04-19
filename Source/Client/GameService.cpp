#include "Client_PCH.h"


GameService::GameService() :zNetSerivce(H::logger->getName())
{
	dbCoon = NULL;
	netioTaskTimer = NULL;
	timeTickTaskTimer = NULL;
	H::timeTick = new zTimeTick();
}

GameService::~GameService()
{

}

bool GameService::run()
{
	SSleep(10);
	return true;
}

void GameService::finaly()
{

}

void GameService::netioUpdate(const zTaskTimer* timer)
{
	/* 与ws,fep,dp之前socket定时处理IO消息，包括消息协议的处理  */
	sessionMgr.updateIO(timer);
	GameCommand::Instance()->LoopInput();

	/* 玩家定时处理有需要的时间事件(业务逻辑) */
	if (timer->is1Min())
	{
		pingToServer();

	}

	if (timer->is1Sec())
	{
		PlayerMgr::Instance()->Update(timer);
	}
}

void GameService::timerTickUpdate(const zTaskTimer* timer)
{
	if (H::timeTick)
	{
		H::timeTick->update();
	}
}

void GameService::pingToServer()
{
	struct MyPing : public execEntry<zSession>
	{
		virtual bool exec(zSession* entry)
		{
			if (entry->serverType == zSession::SERVER_TYPE_CLIENT)
			{
				static S::SSRqPingToS send;
				entry->sendMsg(&send, sizeof(send));
			}
			return true;
		}
	};
	MyPing ping;
	sessionMgr.execEveryConn(ping);
}

bool GameService::init()
{
	// 初始化NetService所有变量等数据 

	serverID = strtoul(H::global["serverid"].c_str(), (char**)NULL, 10);
	serverType = serverID / 1000;

	bool bResult = serverCfgMgr.loadConfig("serivces.xml");
	if (!bResult)
	{
		H::logger->error("Load serivces.xml fail");
		return false;
	}

	const zSerivceCfgMgr::Server* server = serverCfgMgr.getServer(serverID);
	std::map<int32, zSerivceCfgMgr::Serivce>::const_iterator it = server->serivces.begin();
	for (; it != server->serivces.end(); ++it)
	{
		const zSerivceCfgMgr::Serivce& info = it->second;
		if (stricmp(info.name.c_str(), "client") == 0)
		{
			zSession* session = sessionMgr.connect(info.id, info.ip.c_str(), info.port,
				boost::bind(&NetMsgHandler::OnNetMsgEnter, NetMsgHandler::Instance(), _1),
				boost::bind(&NetMsgHandler::OnNetMsg, NetMsgHandler::Instance(), _1, _2, _3),
				boost::bind(&NetMsgHandler::OnNetMsgExit, NetMsgHandler::Instance(), _1)
			);
			if (!session)
			{
				H::logger->error("Connect Server Fail!");
				ASSERT(0);
				return false;
			}
			session->setSessionType(server->getSessType());
			Player* player = PlayerMgr::getMe().CreateObj();
			player->id = session->id;
			player->session = session;
			PlayerMgr::getMe().add(player);
		}
	}

	netioTaskTimer = new zTaskTimer(IO_UPDTATE_TIME, 0, boost::bind(&GameService::netioUpdate, this, _1));
	netioTaskTimer->start();

	timeTickTaskTimer = new zTaskTimer(TIMETICK_UPDATE_TIME, 0, boost::bind(&GameService::timerTickUpdate, this, _1));
	timeTickTaskTimer->start();

	GameCommand::getMe().Init();
	GameCommand::getMe().ShowCmd();

	H::logger->error("Server Start Success !");

	return true;
}


/* 参数 -c cfg.xml -l 日志文件  */
int main(int argc, const char * argv[])
{
	H::logger = new zLogger("Client");
	/* 设置缺省参数  */
	H::global["datadir"] = "data/";
	H::global["confdir"] = "conf/";
	H::global["questdir"] = "quest/";
	H::global["mail_service"] = "on";
	H::global["log"] = "debug";

	H::logger->setLevel(H::global["log"]);


	std::string strServerID = "1";
	if (argc > 2)
	{
		for (int32 i = 1; i < argc;)
		{
			if (strncmp("-c", argv[i], 2) == 0)
			{
				strServerID = argv[i + 1];
			}
			i += 2;
		}
	}

	H::global["serverid"] = strServerID;

	GameService::getMe().main();
	GameService::delMe();

	return 0;
}












