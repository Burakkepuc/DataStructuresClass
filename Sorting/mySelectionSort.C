#include <stdio.h>


void selectionSort(int Arr[],int n );
void swap(int *a,int *b);

int main(){
	int Arr[] = {22,55,3,11,99};
	int n = sizeof(Arr) / sizeof(Arr[0]); // 5*4 = 20 / 4(byte) = 5;
	selectionSort(Arr,n);

	for(int i = 0;i<n;i++){
		printf("%d ",Arr[i]);
	}
}

void selectionSort(int Arr[],int n){
	int i,j,minIndex;
	for(int i = 0; i< n-1;i++){
	 minIndex = i;
		for(int j = i+1;j < n ;j++){
			if(Arr[j] < Arr[minIndex]) //It will travell all array to find less
			minIndex = j;
		}
		
		swap(&Arr[minIndex],&Arr[i]);
	}
	
}

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
