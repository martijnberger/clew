
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
        proxy-opencl/CL/cl.h proxy-opencl/CL/opencl.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/proxy-opencl/CL
    PERMISSIONS
        OWNER_READ
        GROUP_READ
        WORLD_READ )
install( 
    FILES 
        proxy-opencl/OpenCL/cl.h proxy-opencl/OpenCL/opencl.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/proxy-opencl/OpenCL
    PERMISSIONS
        OWNER_READ
        GROUP_READ
        WORLD_READ )
endif()

