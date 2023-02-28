cmake_minimum_required(VERSION 3.25.1)
project(SimChat VERSION 1.0.1)

set(CMAKE_CXX_STANDARD 20)

set (Sample_VERSION_MAJOR 1)
set (Sample_VERSION_MINOR 0)
set (Sample_VERSION_PATCH 1)



include_directories("/home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin")
include_directories("/home/gabriel/Desktop/WorkSpace/SimChats/SimChat/lib")
add_executable(sender.exel sender.cpp)
add_executable(screen.exel screen.cpp)
#add_executable(FUN.exel FUN.cpp)
add_executable(testFunc.exel Func.hpp testfun.cpp)

configure_file(
  "${PROJECT_SOURCE_DIR}/Version.h.in"
  "${PROJECT_BINARY_DIR}/Version.h"
  )

  set( MY_SOURCES sender.cpp screen.cpp FUN.cpp testfun.cpp)
  set( MY_BINARIES sender.exec screen.exec FUN.exec testFunc.exec)
  message(STATUS "Meus Codigos Fontes: ${MY_SOURCES}")
  message(STATUS "Meus arquivos execultaveis: ${MY_BINARIES}")