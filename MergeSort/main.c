#include <stdio.h>
#include "MergeSort.h"
#include <stdlib.h>
#include <time.h>

int main () {

        int SizeRand=16;
	srand((float)time(NULL));

	float Array[SizeRand];

//	int SizeArr = 6;//sizeof(Array)/sizeof(Array[0]);

	for(int i =0; i<SizeRand;i++){
	
		Array[i]=((float)rand()/(float)(RAND_MAX)*1.0);
	}


	MergeSort(Array,0,15);

printf("hello\n");
	print(Array,16);





return 0;

}
