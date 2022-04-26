cmake_minimum_required(VERSION 3.21)
project(base_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_cpp main.cpp Fecha.cpp Fecha.h Ticket.cpp Ticket.h Hora.cpp Hora.h)
