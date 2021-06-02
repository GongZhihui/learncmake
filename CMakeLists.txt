cmake_minimum_required(VERSION 3.5)
project(learncmake LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#定义exe, lib, dll的安装目录
set(INSTALL_BIN_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#设置兼容xp
#set(CMAKE_GENERATOR_TOOLSET "v140_xp" CACHE STRING "Platform Toolset" FORCE)

set(CMAKE_DEBUG_POSTFIX "d")

#子项目
add_subdirectory(main)
add_subdirectory(widget)


