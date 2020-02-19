//
// Created by magway on 19.02.2020.
//

#include "ConnectedClient.h"
#include <unistd.h>   //closeConnection
#include <arpa/inet.h>    //closeConnection

ConnectedClient::ConnectedClient(int socket) : clientSocket(socket) {
    printf("new connected client as %d\n", clientSocket);
}

ConnectedClient::~ConnectedClient() {
}

int ConnectedClient::getClientSocket() const {
    return clientSocket;
}

void ConnectedClient::closeConnection() {
    printf("close connected client %d\n", clientSocket);
    close(clientSocket);
}
