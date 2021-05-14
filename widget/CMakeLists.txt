# 动态库
include(../module.cmake)

include_directories(.)
include_directories(..)

find_cur_all_files(CUR_DIRS)
source_group_by_dir(CUR_DIRS)

# 链接库
link_directories(${INSTALL_BIN_PATH})
link_libraries(plugin xxx)
set(EXECUTABLE_OUTPUT_PATH ${INSTALL_BIN_PATH})
add_executable(learn_cmake WIN32 ${CUR_DIRS})

find_package()
target_link_libraries()
