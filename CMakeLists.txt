project(parser)

cmake_minimum_required(VERSION 2.6)

set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -Wl,--no-undefined -fPIC -std=gnu99 -Wall -Wconversion -Werror=implicit-function-declaration")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wl,--no-undefined -fPIC -std=c++11 -Wall -Wconversion -Werror=implicit-function-declaration")

add_subdirectory("modules/compiler")
add_subdirectory("modules/loader")
add_subdirectory("tools/compiler")
add_subdirectory("tools/dump")
