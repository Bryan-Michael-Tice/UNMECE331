#include "MergeSort.h"

void MergeSort(float Array[],int LeftIndex, int RightIndex){
	
	if(LeftIndex<RightIndex){
	
		int M = (LeftIndex+(RightIndex-1))/2;
		MergeSort (Array,LeftIndex,M);
 		MergeSort(Array,M+1,RightIndex);
		Merge(Array,LeftIndex,M,RightIndex);
	
	}
	
	

}


void Merge(float Array[], int LeftIndex, int Middle,int RightIndex){

	int w,x,y;
	int Point1;
	int Point2;
	Point1= Middle-LeftIndex+1;
	Point2=RightIndex-Middle;

	float Left[Point1];
	float Right[Point2];

	for(w=0;w<Point1;w++){
	
		Left[w] = Array[LeftIndex+w];
		
	}
	for (x=0;x<Point2;x++){

		Right[x]=Array[Middle+1+x];
	
	
	}


	w=0;x=0,y=1;
	
	while(w<Point1 && w<Point2){
	
		if(Left[w]<=Right[x]){
		
			Array[y]=Left[w];
			++w;
		}
		else{
		
			Array[y]=Right[x];
			++x;
		}

		y++;
	}	
	printf("\n Left sub-array printing\n");
	print(Left,8);
	printf("\n\n");
	while (x<Point2){
	
		Array[y]=Right[x];
		x++;y++;
	
	}

	
	printf("\n Right Sub-array printing\n");
	print(Right,8);
	printf("\n\n");
}


void print(float Array[],int ArraySize){


	for(int i=0; i<ArraySize; i++){
	
		printf("%f\n",Array[i]);
	
	
	}


}
