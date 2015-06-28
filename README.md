# clew
The OpenCL Extension Wrangler Library

This basically works like glew, but for OpenCL
- you can build opencl code without needing any opencl library or include files!
- at runtime, even if there is no opencl-enabled device present, your code will still run!  Of course, you wont be able to do anything opencl-related, but you wont get any errors about missing dlls and stuff, no linker errors (at least, not until you try to use a non-existent opencl-enabled device of course)

## Code history

* The code was originally part of a larger project, then was factorized out into a standalone github project
