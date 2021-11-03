import ctypes
import numpy as np
lib = ctypes.CDLL('./lib.so')

x = np.array([[3,4,3],[2,5,6]],dtype=np.intc)
y = np.array([[3,2,2],[2,5,6]],dtype=np.intc)
z = np.array([[3,1,1],[1,8,9]],dtype=np.intc)

A = np.stack([x,y,z],axis=2)
print(A)
# A = y
if not A.flags['C_CONTIGUOUS']:
	A = np.ascontiguousarray(A, dtype= A.dtype)
A_ct = ctypes.c_void_p(A.ctypes.data)
shape = np.array(A.shape,dtype=np.uintc)
shape_ct = ctypes.c_void_p(shape.ctypes.data)
nd = ctypes.c_uint(len(A.shape))
lib.printNumpy(A_ct,shape_ct,nd)

print(A)