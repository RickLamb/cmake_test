add_library(LibA STATIC src/liba.cpp include/liba.h)
target_include_directories(LibA PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)