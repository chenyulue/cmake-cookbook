cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-04 LANGUAGES C)

set(USE_LIBRARY OFF)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

set(BUILD_SHARED_LIBS OFF)

list(APPEND _sources message.h message.c)

if(USE_LIBRARY)
    add_library(message ${_sources})
    add_executable(hello-world hello-world.c)
    target_link_libraries(hello-world message)
else()
    add_executable(hello-world hello-world.c ${_sources})
endif()