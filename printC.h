#pragma once

// The exposed functions must be declared within extern 'C'
// To compile and link the function prototype as C code, to be used with
// ctypes module. 
// These functions can't be overloaded like in C++, but the definition can 
// use C++ objects inside them.

#ifdef __cplusplus
extern "C" {
#endif

void printNumpy(void*, void*, unsigned int);

#ifdef __cplusplus
}
#endif