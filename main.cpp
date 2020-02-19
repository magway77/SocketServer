#include "pch.h"
#include "SocketListener.h"

int main(int argc, char *argv[]) {
    SocketListener socketServer;
    socketServer.start();
    return 0;
}