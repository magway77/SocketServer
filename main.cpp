#include "pch.h"
#include "SocketListener.h"

int main(int argc, char *argv[]) {
    SocketListener socketServer;
    try {
        socketServer.start();
    } catch (SocketListenerException &e) {
        perror(e.what());
        exit(EXIT_FAILURE);
    }
    return EXIT_SUCCESS;
}