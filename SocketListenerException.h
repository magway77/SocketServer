//
// Created by magway on 19.02.2020.
//

#ifndef CHATSERVER_SOCKETLISTENEREXCEPTION_H
#define CHATSERVER_SOCKETLISTENEREXCEPTION_H

#include "pch.h"

class SocketListenerException : public exception {

private:

    const char *m_pMsg;

public:

    explicit SocketListenerException(const char *msg);

    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT;

};


#endif //CHATSERVER_SOCKETLISTENEREXCEPTION_H
