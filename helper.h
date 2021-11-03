#include <iostream>
using namespace std;

#define id(x,y,t) (x)*shape[1]*shape[2]+(y)*shape[2]+(t)

void printArray(int* arr, unsigned int size){
	for(int i=0;i<size;++i){
		cout<<arr[i]<<"::";
	}
}

void printArray(int* arr, unsigned int* shape){
	printf("%d %d\n",shape[0],shape[1]);
	// std::vector<int> res;
	for(int i=0;i<shape[0];++i){
		for(int j=0;j<shape[1];++j){
			cout<<arr[i*shape[1]+j]<<"::";
			arr[i*shape[1]+j] += 2;
			// res.push_back(arr[i*shape[1]+j]);
		}
		printf("\n");
	}
	// return (!res.empty());
}

void printArray(int* arr, unsigned int* shape,bool is3){
	for(int t=0;t<shape[2];++t){
		for(int i=0;i<shape[0];++i){
			for(int j=0;j<shape[1];++j){
				cout<<arr[id(i,j,t)]<<"::";
				arr[id(i,j,t)] += 2;
			}
			printf("\n");
		}
		printf("\n");
	}
}