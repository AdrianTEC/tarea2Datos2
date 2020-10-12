# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ClientTest_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ClientTest_autogen.dir/ParseCache.txt"
  "CMakeFiles/example_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/example_autogen.dir/ParseCache.txt"
  "ClientTest_autogen"
  "example_autogen"
  "googletest-build/googlemock/CMakeFiles/gmock_autogen.dir/AutogenUsed.txt"
  "googletest-build/googlemock/CMakeFiles/gmock_autogen.dir/ParseCache.txt"
  "googletest-build/googlemock/CMakeFiles/gmock_main_autogen.dir/AutogenUsed.txt"
  "googletest-build/googlemock/CMakeFiles/gmock_main_autogen.dir/ParseCache.txt"
  "googletest-build/googlemock/gmock_autogen"
  "googletest-build/googlemock/gmock_main_autogen"
  "googletest-build/googletest/CMakeFiles/gtest_autogen.dir/AutogenUsed.txt"
  "googletest-build/googletest/CMakeFiles/gtest_autogen.dir/ParseCache.txt"
  "googletest-build/googletest/CMakeFiles/gtest_main_autogen.dir/AutogenUsed.txt"
  "googletest-build/googletest/CMakeFiles/gtest_main_autogen.dir/ParseCache.txt"
  "googletest-build/googletest/gtest_autogen"
  "googletest-build/googletest/gtest_main_autogen"
  )
endif()
