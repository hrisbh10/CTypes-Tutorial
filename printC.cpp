// #include "helper.h"
#include <stdio.h>
#include "helper.h"
#include "printC.h"

void printNumpy(void* _arr, void* _shape, unsigned int nd){
	unsigned int *shape = (unsigned int*)_shape;
	if(nd > 3){
		printf("Too many dimensions!!\n");
		return;
	}
	else if(nd == 1){
		printArray((int*)_arr,shape[0]);
	}
	else if(nd == 2){
		printArray((int*)_arr,shape);
		// printf("%d::\n",status);
	}
	else{
		printArray((int*)_arr,shape,1);
	}

}

