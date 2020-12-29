cmake_minimum_required(VERSION 3.12)
project(vca)
# Used to detect a module on the system
include(FindPkgConfig)
pkg_check_modules(FOO REQUIRED libfoo)
add_executable(vca vca.c)
target_include_directories(vca PRIVATE ${FOO_INCLUDE_DIRS})
target_link_libraries(vca PRIVATE ${FOO_LIBRARIES})
