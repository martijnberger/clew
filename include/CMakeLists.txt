
set(PUBLIC_HEADERS
    clew.h
	CL/cl.h
)

install( 
    FILES 
        ${PUBLIC_HEADERS} 
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include
    PERMISSIONS
        OWNER_READ
        GROUP_READ
        WORLD_READ )
