
add_library( clew SHARED clew.c )

target_link_libraries( clew dl )

install(TARGETS clew DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
