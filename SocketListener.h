//
// Created by magway on 19.02.2020.
//

#ifndef SH_SOCKETLISTENER_H
#define SH_SOCKETLISTENER_H

#include "pch.h"
#include "ConnectedClient.h"
#include "SocketListenerException.h"

class SocketListener {
private:

    uint16_t m_port;

    int m_maxClients;

    int master_socket;

    vector<ConnectedClient> connectedClients;

    int createMasterSocket(const struct sockaddr_in &address) throw(SocketListenerException);

protected:
public:
    SocketListener();

    virtual ~SocketListener();

    void start() throw(SocketListenerException);

    void stop();

};


#endif //SH_SOCKETLISTENER_H
