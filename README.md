# CTypes-Tutorial

Module _ctypes_ allows a python code to use C/C++ code as per convenience. The only catch in using C++ is that the return type and arguments of the functions which are exposed to Python code, must be C-Type only as mentioned in the _ctypes_ documentation.

#### Contents

| File | Description |
|------|---------------|
|test.py| Python code to test the _ctypes_ module for numpy array.|
|printC.h| Lists the prototype of the functions that are exposed as C-API.|
|printC.cpp| Actual definition of the functions exposed. | 
| Makefile | Compile and link the printC.cpp to create the shared library for use.|  

### Using Templates
Templates in C++ can't be directly made a shared library, as templates require a linker to make sense of it.
So here, only an object file is generated. The solution to this is to explicitly mention the data types, the template's gonna use at the end of the header file.
The function definitions of a file must be made in a single header file also for successful translation.