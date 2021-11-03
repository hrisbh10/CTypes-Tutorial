# CTypes-Tutorial

Module _ctypes_ allows a python code to use C/C++ code as per convenience. The only catch in using C++ is that the return type and arguments of the functions which are exposed to Python code, must be C-Type only as mentioned in the _ctypes_ documentation.

#### Contents

| File | Description |
|------|---------------|
|test.py| Python code to test the _ctypes_ module for numpy array.|
|printC.h| Lists the prototype of the functions that are exposed as C-API.|
|printC.cpp| Actual definition of the functions exposed. | 
| Makefile | Compile and link the printC.cpp to create the shared library for use.|  
