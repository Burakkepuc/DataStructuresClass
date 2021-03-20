#include <stdio.h>


void selectionSort(int low,int high);
int a[25];



int main(){
int num,i;
	printf("Enter the number of the elements: ");
	scanf("%d",&num);
	
	printf("\nEnter the elements:\n");
	for(i = 0; i<num;i++)
		scanf("%d",&a[i]);
	selectionSort(0,num-1);
	printf("\n The elements after sorting are: ");
	for(i = 0; i<num;i++)
		printf("%d \n",a[i]);
}

void selectionSort(int low,int high){
	int temp = 0,i,j,minIndex;
	
	for(int i = low; i<= high;i++){
	
	minIndex = i;
	for(int j = i+1;j <= high ; j++){
		if(a[j] < a[minIndex]) //if i+1 less than minIndex
			minIndex = j;//choose it as min index
     	}
	//then change between them
	temp = a[i];
	a[i]= a[minIndex];
	a[minIndex] = temp;
	}
}
