# 动态库
set(src 
    hello.h
    hello.cpp)

add_definitions(-D HELLO_EXPORT)
add_library(hello SHARED ${src})
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)