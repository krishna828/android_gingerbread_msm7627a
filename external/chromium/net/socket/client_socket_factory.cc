// Copyright (c) 2006-2008 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/socket/client_socket_factory.h"

#include "base/singleton.h"
#include "build/build_config.h"
#if defined(OS_WIN)
#include "net/socket/ssl_client_socket_win.h"
#elif defined(USE_NSS)
#include "net/socket/ssl_client_socket_nss.h"
#elif defined(OS_MACOSX)
#include "net/socket/ssl_client_socket_mac.h"
#endif
#include "net/socket/tcp_client_socket.h"

namespace net {

namespace {

SSLClientSocket* DefaultSSLClientSocketFactory(
    ClientSocket* transport_socket,
    const std::string& hostname,
    const SSLConfig& ssl_config) {
#if defined(OS_WIN)
  return new SSLClientSocketWin(transport_socket, hostname, ssl_config);
#elif defined(USE_NSS)
  return new SSLClientSocketNSS(transport_socket, hostname, ssl_config);
#elif defined(OS_MACOSX)
  return new SSLClientSocketMac(transport_socket, hostname, ssl_config);
#else
  NOTIMPLEMENTED();
  return NULL;
#endif
}

// True if we should use NSS instead of the system SSL library for SSL.
SSLClientSocketFactory g_ssl_factory = DefaultSSLClientSocketFactory;

class DefaultClientSocketFactory : public ClientSocketFactory {
 public:
  virtual ClientSocket* CreateTCPClientSocket(
      const AddressList& addresses) {
    return new TCPClientSocket(addresses);
  }

  virtual SSLClientSocket* CreateSSLClientSocket(
      ClientSocket* transport_socket,
      const std::string& hostname,
      const SSLConfig& ssl_config) {
    return g_ssl_factory(transport_socket, hostname, ssl_config);
  }
};

}  // namespace

// static
ClientSocketFactory* ClientSocketFactory::GetDefaultFactory() {
  return Singleton<DefaultClientSocketFactory>::get();
}

// static
void ClientSocketFactory::SetSSLClientSocketFactory(
    SSLClientSocketFactory factory) {
  g_ssl_factory = factory;
}

}  // namespace net
