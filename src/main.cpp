#include <exception>
#include <iostream>

#include "Server.hpp"

int main() {
  Server srv;

  try {
    // srv.start();
  } catch (std::exception e) {
    std::cerr << "An error occured on the server: " << e.what() << std::endl;
  }
  return (0);
}
