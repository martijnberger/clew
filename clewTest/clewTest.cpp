// clewTest.cpp : Defines the entry point for the console application.
//

#include <tchar.h>
#include "clew.h"


int _tmain(int argc, _TCHAR* argv[])
{
	clewInit(L"opencl.dll");
	return 0;
}

