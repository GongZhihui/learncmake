# 动态库

include(../qtconfig.cmake)
include(../module.cmake)

include_directories(.)

find_cur_all_files(CUR_DIRS)
source_group_by_dir(CUR_DIRS)

#link_directories()
#link_libraries()

set(EXECUTABLE_OUTPUT_PATH ${INSTALL_BIN_PATH})
add_executable(widget WIN32 ${CUR_DIRS})

set_target_properties(widget PROPERTIES OUTPUT_NAME "widget-rename")

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
