//
// Created by magway on 19.02.2020.
//

#ifndef SH_CONNECTEDCLIENT_H
#define SH_CONNECTEDCLIENT_H

#include "pch.h"

class ConnectedClient {
private:

    int clientSocket;


public:

    explicit ConnectedClient(int socket);

    virtual ~ConnectedClient();

    int getClientSocket() const;

    void closeConnection();
};


#endif //SH_CONNECTEDCLIENT_H
