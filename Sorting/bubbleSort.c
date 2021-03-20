#include <stdio.h>


void bubbleSort(int x[],int n){
	int j,i,temp;
	
	for(i = 0; i < n; i++){
		for(j=0;j< n - i - 1; j++){
			if(x[j] > x[j + 1]){
				temp = x[j];
				x[j] = x[j+1];
				x[j + 1] = temp;
			}
		}
	}
}

int main(){
	int n,i,x[25];
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i = 0; i <n;i++){
		scanf("%d",&x[i]);
	}
	bubbleSort(x,n);
	printf("\n The elements after sorting are: ");
	for(i = 0; i<n;i++)
		printf("%d ",x[i]);
}
