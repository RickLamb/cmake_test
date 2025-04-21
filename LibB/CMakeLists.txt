cmake_minimum_required (VERSION 3.31)
project(ProjectB)

include(CTest) # note: this adds a BUILD_TESTING which defaults to ON

add_subdirectory(lib)

if(BUILD_TESTING)
add_subdirectory(tests)
endif()
