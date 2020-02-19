cmake_minimum_required(VERSION 3.15)
project(sh)

set(CMAKE_CXX_STANDARD 14)

add_executable(sh
        main.cpp SocketListener.cpp SocketListener.h ConnectedClient.cpp ConnectedClient.h pch.h)
