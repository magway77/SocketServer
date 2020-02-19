cmake_minimum_required(VERSION 3.15)
project(ChatServer)

set(CMAKE_CXX_STANDARD 98)

add_executable(ChatServer
        main.cpp SocketListener.cpp SocketListener.h ConnectedClient.cpp ConnectedClient.h pch.h SocketListenerException.cpp SocketListenerException.h)
