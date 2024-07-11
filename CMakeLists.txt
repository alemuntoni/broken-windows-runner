cmake_minimum_required(VERSION 3.13)
project(broken-runner)

### Build settings
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(SOURCES
	main.cpp)

add_library(stb SHARED stb_src.cpp)

add_executable(broken-runner ${SOURCES})

target_link_libraries(broken-runner PRIVATE stb)


