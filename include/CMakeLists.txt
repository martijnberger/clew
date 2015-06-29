
set(PUBLIC_HEADERS
    clew.h
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

if( INSTALL_CL_HEADER )
install( 
    FILES 
        CL/cl.h CL/opencl.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/CL
    PERMISSIONS
        OWNER_READ
        GROUP_READ
        WORLD_READ )
endif()
