cmake_minimum_required(VERSION 2.8)
project(SimChats)

ENABLE_TESTING()
add_test(sender sender.exec)
add_test(screen screen.exec)
add_test(FUN FUN.exec)

set (Sample_VERSION_MAJOR 0)
set (Sample_VERSION_MINOR 0)
set (Sample_VERSION_PATCH 1)


include_directories("/home/gabriel/Documentos/chatpp/src")
add_executable(sender.exec sender.cpp)
add_executable(screen.exec screen.cpp)
add_executable(FUN.exec FUN.cpp)



