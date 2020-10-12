cmake_minimum_required(VERSION 2.8.2)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           master
  SOURCE_DIR        "/home/adrian/Escritorio/tarea2Datos2/build-ServerTest-Desktop_Qt_5_15_1_GCC_64bit-Debug/googletest-src"
  BINARY_DIR        "/home/adrian/Escritorio/tarea2Datos2/build-ServerTest-Desktop_Qt_5_15_1_GCC_64bit-Debug/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
