#include "Server.hpp"

Server::Server() {

}

Server::~Server() {
  // this->threadPool->shutdown();
  delete(this->socket);
  delete(this->threadPool);
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
