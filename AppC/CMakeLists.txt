cmake_minimum_required (VERSION 3.31)
project(AppC)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)


# You can use the two-argument form of the add_subdirectory command to add any directory you want as a "sub" directory:
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../LibA/lib ${CMAKE_CURRENT_BINARY_DIR}/LibA)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../LibB/lib ${CMAKE_CURRENT_BINARY_DIR}/LibB)

add_executable(MyExe myexe.cpp)
target_link_libraries(MyExe LibA)
target_link_libraries(MyExe LibB)
