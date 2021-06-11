# 动态库
project(widget)

include(../qtconfig.cmake)
include(../module.cmake)

include_directories(.)

find_cur_all_files(CUR_DIRS)
source_group_by_dir(CUR_DIRS)

# 排除单个文件
#list(REMOVE_ITEM CUR_DIRS 
#    ${PROJECT_ROOT_DIR}/xxxx.cpp
#)

#link_directories()
#link_libraries()

# add_executable(${PROJECT_NAME} WIN32 ${CUR_DIRS})
# set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME lib${PROJECT_NAME}_h)
# set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "_d") 
create_exe(${PROJECT_NAME} ${CUR_DIRS})

find_package(Qt5
    COMPONENTS
    core 
    gui 
    widgets
    REQUIRED
)

# 对应vs中项目依赖
# add_dependencies(
#     ${PROJECT_NAME}
#     other_project_name
#     other_project_name
# )

target_link_libraries(${PROJECT_NAME}  PRIVATE
    Qt5::Core 
    Qt5::Gui 
    Qt5::Widgets 
)
