# Install script for directory: D:/dev/Server.engine/Source

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/HMX_Server_Cmake")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/dev/Server.engine/build/Include/cmake_install.cmake")
  include("D:/dev/Server.engine/build/LibSrvcore/cmake_install.cmake")
  include("D:/dev/Server.engine/build/LibNetSocket/cmake_install.cmake")
  include("D:/dev/Server.engine/build/LibNetMysql/cmake_install.cmake")
  include("D:/dev/Server.engine/build/LibProtocol/cmake_install.cmake")
  include("D:/dev/Server.engine/build/WorldServer/cmake_install.cmake")
  include("D:/dev/Server.engine/build/DBServer/cmake_install.cmake")
  include("D:/dev/Server.engine/build/GameServer/cmake_install.cmake")
  include("D:/dev/Server.engine/build/LoginServer/cmake_install.cmake")
  include("D:/dev/Server.engine/build/GatewayServer/cmake_install.cmake")
  include("D:/dev/Server.engine/build/Client/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/dev/Server.engine/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
