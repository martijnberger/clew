# clew
The OpenCL Extension Wrangler Library

This basically works like glew, but for OpenCL
- you can build opencl code without needing any opencl library or include files!
- at runtime, even if there is no opencl-enabled device present, your code will still run!  Of course, you wont be able to do anything opencl-related, but you wont get any errors about missing dlls and stuff, no linker errors (at least, not until you try to use a non-existent opencl-enabled device of course)

## Code history

* The code was originally part of a larger project, then was factorized out into a standalone github project

## To use in your code

Include it
```
#include "clew.h"
```

Initialize it
```
bool clpresent = 0 == clewInit();
if( !clpresent ) {
    throw std::runtime_error("OpenCL library not found");
}
```

Use standard OpenCL method calls, as though you were linking directly with OpenCL:

```
context = new cl_context();
*context = clCreateContext(0, 1, &device, NULL, NULL, &error);
if (error != CL_SUCCESS) {
   throw std::runtime_error( "Error creating context: " + errorMessage(error) );
}
// Command-queue
queue = new cl_command_queue;
*queue = clCreateCommandQueue(*context, device, 0, &error);
if (error != CL_SUCCESS) {
   throw std::runtime_error( "Error creating command queue: " + errorMessage(error) );
}
// etc ...
```

