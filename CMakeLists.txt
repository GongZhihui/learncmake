cmake_minimum_required(VERSION 3.5)
project(learncmake LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#定义exe, lib, dll的安装目录
set(INSTALL_BIN_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/target/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/target/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/target/lib)

#设置兼容xp
#set(CMAKE_GENERATOR_TOOLSET "v140_xp" CACHE STRING "Platform Toolset" FORCE)

set(CMAKE_DEBUG_POSTFIX "d")

#子项目
add_subdirectory(helloworld)
add_subdirectory(widget)

#创建项目分类文件夹
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)
#set_target_properties(widget PROPERTIES FOLDER widget)
#set_target_properties(helloworld PROPERTIES FOLDER hello/world)


