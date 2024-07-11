cmake_minimum_required(VERSION 3.13)
project(broken-runner)

### Build settings
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

if (WIN32)
    add_compile_definitions(NOMINMAX)
    add_compile_definitions(_USE_MATH_DEFINES)
    if (MSVC)
        # remove possible loss of data warnings in msvc, leave the others
        add_compile_options(/w44244 /w44267 /w44305)
    endif()
endif()

include(CTest)
include(FetchContent)

FetchContent_Declare(Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.3.2)

FetchContent_MakeAvailable(Catch2)

set(SOURCES
	main.cpp)

add_library(stb SHARED stb_src.cpp)

add_executable(broken-runner ${SOURCES})

target_link_libraries(broken-runner PRIVATE stb Catch2::Catch2WithMain)

enable_testing()
add_test(NAME br COMMAND broken-runner)


