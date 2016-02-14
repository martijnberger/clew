
if( BUILD_SHARED_LIBRARY )
  add_library( clew SHARED clew.c )
else()
  add_library( clew clew.c )
endif()

set_target_properties(clew
    PROPERTIES
        OUTPUT_NAME clew
        CLEAN_DIRECT_OUTPUT 1
        SOVERSION "1.0.0"
    )

if(UNIX)
target_link_libraries( clew dl )
endif(UNIX)

install(TARGETS clew 
	LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX}
	ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX}
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
