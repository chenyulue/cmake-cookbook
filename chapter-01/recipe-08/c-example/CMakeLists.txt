cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-08 LANGUAGES C)

message("C compiler flags: ${CMAKE_C_FLAGS}")

list(APPEND flags "-fPIC" "-Wall")
if(NOT WIN32)
    list(APPEND flags "-Wextra" "-Wpedantic")
endif()

add_library(geometry STATIC 
            geometry_circle.c geometry_circle.h 
            geometry_polygon.c geometry_polygon.h 
            geometry_rhombus.c geometry_rhombus.h 
            geometry_square.c geometry_square.h)
target_compile_options(geometry PRIVATE ${flags})

add_executable(compute-areas compute-areas.c)
target_compile_options(compute-areas PRIVATE "-fPIC")

target_link_libraries(compute-areas geometry)