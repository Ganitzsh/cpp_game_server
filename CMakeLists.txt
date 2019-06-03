cmake_minimum_required(VERSION 2.6)
project(one_app)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")

set(CMAKE_CXX_FLAGS "-g -Wall")

find_package(Protobuf REQUIRED)
message("   --> PROTOBUF LIB: ${PROTOBUF_LIBRARIES}")
message("   --> PROTOBUF INCLUDE: ${PROTOBUF_INCLUDE_DIRS}")
message("   --> PROTOBUF VERSION: ${Protobuf_VERSION}")
message("   --> PROTOBUF Found: ${Protobuf_FOUND}")
include_directories(${Protobuf_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD_LIBRARIES "-L/usr/local/lib -lprotobuf")

include_directories(inc)
include_directories(proto)

file(GLOB SOURCES "src/*.cpp")
file(GLOB PROTO_SOURCES "proto/*.cc")

add_executable(one ${SOURCES} ${PROTO_SOURCES})
