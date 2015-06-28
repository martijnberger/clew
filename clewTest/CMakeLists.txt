
add_executable( clewTest clewTest.cpp )

target_link_libraries( clewTest clew )

install(TARGETS clewTest 
	RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

