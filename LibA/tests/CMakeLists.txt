set(TEST_SOURCES 
  test_liba.cpp
)

create_test_sourcelist(PROJ_SOURCES
  test_runner.cpp
  ${TEST_SOURCES}
)

# Set custom code to execute before each test
set(CMAKE_TESTDRIVER_BEFORE_TESTMAIN "printf(\"Running test: %s\\n\", __func__);")

# Add the executable
add_executable(TestLibA ${PROJ_SOURCES})
target_link_libraries(TestLibA PRIVATE LibA)
set_target_properties(TestLibA PROPERTIES VS_DEBUGGER_COMMAND_ARGUMENTS "-A")
