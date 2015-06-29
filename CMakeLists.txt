project(clew)

option( BUILD_TESTS "Build test program." ON )
option( BUILD_SHARED_LIBRARY "Shared library, rather than static library." OFF )
option( INSTALL_CL_HEADER "Install cl.h / opencl.h  proxy headers to ease compilation of software not aware of CLEW" OFF )

cmake_minimum_required (VERSION 2.6)
if (NOT CMAKE_VERSION VERSION_LESS 2.8.4)
    cmake_policy (SET CMP0017 NEW)
endif()

include(CMakeParseArguments)

set(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE)
message(STATUS "Project source dir = ${PROJECT_SOURCE_DIR}")
message(STATUS "Project build dir = ${CMAKE_BINARY_DIR}")

# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

if(CMAKE_COMPILER_IS_GNUCC)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -Wall")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall")
endif()

add_definitions(-DCL_USE_DEPRECATED_OPENCL_1_1_APIS)
if( NOT BUILD_SHARED_LIBRARY )
  add_definitions(-Dclew_STATIC)
endif()

include_directories(include)

add_subdirectory(src)

add_subdirectory(include)

if( BUILD_TESTS )
  add_subdirectory(clewTest)
endif( BUILD_TESTS )

