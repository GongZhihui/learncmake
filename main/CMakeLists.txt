include_directories(D:\\vcpkg\\installed\\x86-windows\\include)

set(main_src main.cpp)
add_executable(helloworld ${main_src})
target_link_libraries(helloworld hello world)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)