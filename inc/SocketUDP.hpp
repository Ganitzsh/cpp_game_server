#ifndef SOCKET_UDP_HPP
#define SOCKET_UDP_HPP

class SocketUDP {
private:
  int socketFd;

public:
  SocketUDP();
  virtual ~SocketUDP();
};

#endif /* SOCKET_UDP_HPP */
