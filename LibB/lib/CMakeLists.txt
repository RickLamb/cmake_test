add_library(LibB STATIC src/libb.cpp include/libb.h)
target_include_directories(LibB PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)