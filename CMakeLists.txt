cmake_minimum_required(VERSION 3.13)
project(broken-runner)

### Build settings
set(CMAKE_CXX_STANDARD 20)

set(SOURCES
	stb_src.cpp
	main.cpp)

add_executable(broken-runner ${SOURCES})


