//
// Created by magway on 19.02.2020.
//

#ifndef SH_SOCKETLISTENER_H
#define SH_SOCKETLISTENER_H

#include "pch.h"
#include "ConnectedClient.h"

class SocketListener {
private:

    uint16_t m_port = 12340;

    int m_maxClients = 30;

    vector<ConnectedClient> m_connectedClients;

protected:
public:
    SocketListener();

    virtual ~SocketListener();

    void start();

    void stop();

};


#endif //SH_SOCKETLISTENER_H
