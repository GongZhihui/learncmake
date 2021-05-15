include(../module.cmake)

find_cur_all_files(CUR_DIRS)
source_group_by_dir(CUR_DIRS)

set(EXECUTABLE_OUTPUT_PATH ${INSTALL_BIN_PATH})
add_executable(helloworld ${CUR_DIRS})

find_package(Qt5
    COMPONENTS
    core 
    gui 
    widgets
    REQUIRED
)

target_link_libraries(helloworld PRIVATE
    Qt5::Core 
    Qt5::Gui 
    Qt5::Widgets 
)