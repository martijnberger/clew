// clewTestC.c : Defines the entry point for the console application.
// this tests from C.  clewTest.cpp tests from c++
//

#include "clew.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
    int clpresent = 0 == clewInit();
    if( !clpresent ) {
        printf("opencl library not found.\n");
        return -1;
    }

    cl_int error = 0;
    cl_platform_id platform_ids[10];
    cl_uint num_platforms;
    error = clGetPlatformIDs(10, platform_ids, &num_platforms);
  	if (error != CL_SUCCESS) {
        printf("something went wrong, errorcode %i\n", error);
    		return -1;
  	}
    printf("num platforms: %i\n", num_platforms);

	  return 0;
}
