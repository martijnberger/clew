project(clew)

cmake_minimum_required(VERSION 2.6)


# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)


include_directories(include)

add_subdirectory(src)

add_subdirectory(include)

add_subdirectory(clewTest)
