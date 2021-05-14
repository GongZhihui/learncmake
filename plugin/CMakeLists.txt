# 静态库
set(src 
    world.h 
    world.cpp)
    
add_library(world ${src})
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)