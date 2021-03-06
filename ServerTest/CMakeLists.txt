cmake_minimum_required(VERSION 3.5)

project(ServerTest LANGUAGES CXX)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage -lgcov")


set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Network LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Network LinguistTools REQUIRED)

if(ANDROID)
  add_library(ServerTest SHARED
    main.cpp
    widget.cpp
    widget.h
    widget.ui
    localserver.cpp
    FloydWResponse.cpp
    FloydWarshall.cpp

  )
else()
  add_executable(ServerTest
    main.cpp
    widget.cpp
    widget.h
    widget.ui

    Grafo.hpp

    DoubleList.hpp
    DoubleNode.hpp

    localserver.h
    localserver.cpp

    localserver.h
    localserver.cpp

    FloydWarshall.h
    FloydWarshall.cpp
    servertest.cpp
    servertest.h
    FloydWResponse.cpp

    Response.h



  )
endif()



# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
#if (CMAKE_VERSION VERSION_LESS 2.8.11)
#  include_directories("${gtest_SOURCE_DIR}/include")
#endif()


add_executable( example example.cpp
    servertest.cpp
    servertest.h


    Grafo.hpp

    DoubleList.hpp
    DoubleNode.hpp

    localserver.h
    localserver.cpp

    localserver.h
    localserver.cpp

    FloydWarshall.h
    FloydWarshall.cpp
    servertest.cpp
    servertest.h
    FloydWResponse.cpp

    Response.h



    )
target_link_libraries(example
        Qt${QT_VERSION_MAJOR}::Widgets
        gtest_main
        Qt${QT_VERSION_MAJOR}::Network
    )
target_link_libraries(ServerTest  PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    gtest_main
    Qt${QT_VERSION_MAJOR}::Network
    )


add_test(NAME example_test COMMAND ServerTest)

