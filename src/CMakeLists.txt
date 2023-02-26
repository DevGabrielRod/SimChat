cmake_minimum_required(VERSION 2.8)
project(SimChat)

set (Sample_VERSION_MAJOR 0)
set (Sample_VERSION_MINOR 0)
set (Sample_VERSION_PATCH 1)

include_directories("/home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin")
add_executable(sender.exec sender.cpp)
add_executable(screen.exec screen.cpp)
add_executable(FUN.exec FUN.cpp)

configure_file(
  "${PROJECT_SOURCE_DIR}/SampleConfig.h.in"
  "${PROJECT_BINARY_DIR}/SampleConfig.h"
  )

