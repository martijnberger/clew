
add_executable( clewTest clewTest.cpp )
add_executable( clewTestC clewTestC.c )

target_link_libraries( clewTest clew )
target_link_libraries( clewTestC clew )

install(TARGETS clewTest 
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

