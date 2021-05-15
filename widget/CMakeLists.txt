# 动态库
include(../module.cmake)

include_directories(.)

find_cur_all_files(CUR_DIRS)
source_group_by_dir(CUR_DIRS)

set(EXECUTABLE_OUTPUT_PATH ${INSTALL_BIN_PATH})
add_executable(widget WIN32 ${CUR_DIRS})

find_package(Qt5
    COMPONENTS
    core 
    gui 
    widgets
    REQUIRED
)

target_link_libraries(widget PRIVATE
    Qt5::Core 
    Qt5::Gui 
    Qt5::Widgets 
)
