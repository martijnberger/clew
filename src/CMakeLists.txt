
add_library( clew SHARED clew.c )

set_target_properties(clew
    PROPERTIES
        OUTPUT_NAME clew
        CLEAN_DIRECT_OUTPUT 1
        SOVERSION "1.0.0"
    )

if( NOT ON_WINDOWS)
target_link_libraries( clew dl )
endif(NOT ON_WINDOWS)

install(TARGETS clew 
	LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
	ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
