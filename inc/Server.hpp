#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>

#include "ThreadPool.hpp"
#include "SocketUDP.hpp"

class Server {
private:
  short port;
  std::string ip;

  SocketUDP* socket;
  ThreadPool* threadPool;

public:
  Server();
  virtual ~Server();

  void setPort(short &port);
  void setIp(std::string &ip);

  short getPort() const;
  std::string getIp() const;

  void start();
};

#endif /* SERVER_HPP */
