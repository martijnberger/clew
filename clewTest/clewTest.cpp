// clewTest.cpp : Defines the entry point for the console application.
//

#include "clew.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    bool clpresent = 0 == clewInit();
    if( !clpresent ) {
        cout << "opencl library not found." << endl;
        return -1;
    }

    cl_int error = 0;
    cl_platform_id platform_ids[10];
    cl_uint num_platforms;
    error = clGetPlatformIDs(10, platform_ids, &num_platforms);
	if (error != CL_SUCCESS) {
		cout << "something went wrong, errorcode " << error << endl;
		return -1;
	}
    cout << "num platforms: " << num_platforms << endl;

	return 0;
}
