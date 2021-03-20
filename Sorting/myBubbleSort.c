#include <stdio.h>


int main(){
	int i,j,temp;
	int arr[] = {55,2,23,3,1,5,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for(i = 0; i< n - 1;i++){
		for(j =0; j< n - i - 1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j +1];
				arr[j +1 ] = temp;
			}
		}
	}
	
	for(i = 0;i < n ; i++){
		printf("%d ",arr[i]);
	}
}
