//
// Created by magway on 19.02.2020.
//

#include "SocketListenerException.h"

SocketListenerException::SocketListenerException(const char *msg) : m_pMsg(msg) {
}

const char *SocketListenerException::what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT {
    return m_pMsg;
}
