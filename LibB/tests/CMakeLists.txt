set(TEST_SOURCES 
  test_libb.cpp
)

create_test_sourcelist(PROJ_SOURCES
  test_runner.cpp
  ${TEST_SOURCES}
)

# Set custom code to execute before each test
set(CMAKE_TESTDRIVER_BEFORE_TESTMAIN "printf(\"Running test: %s\\n\", __func__);")

# Add the executable
add_executable(TestLibB ${PROJ_SOURCES})
target_link_libraries(TestLibB PRIVATE LibB)
set_target_properties(TestLibB PROPERTIES VS_DEBUGGER_COMMAND_ARGUMENTS "-A")
