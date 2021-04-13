cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0)

include_directories(.)
set(main_src main/main.cpp)

add_subdirectory(hello)
add_subdirectory(world)

add_executable(helloworld ${main_src})
target_link_libraries(helloworld hello world)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
