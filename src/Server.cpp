#include "Server.hpp"

Server::Server() {
  this->threadPool = new ThreadPool(10);
}

Server::~Server() {
  // this->threadPool->shutdown();
  if (this->socket != NULL) {
    delete(this->socket);
  }
  if (this->threadPool != NULL) {
    delete(this->threadPool);
  }
}

short Server::getPort() const {
  return this->port;
}

std::string Server::getIp() const {
  return this->ip;
}

void Server::setPort(short &port) {
  this->port = port;
}

void Server::setIp(std::string &ip) {
  this->ip = ip;
}

void Server::start() {
  // while (1) {
  //   ssize_t ret = this->socket->recvFrom();
  // }
}
