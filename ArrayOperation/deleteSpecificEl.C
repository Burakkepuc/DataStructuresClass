#include <stdio.h>
#define SIZE 5


int main(){
	int dizi[SIZE]={1,20,5,78,30};
	int element,i,index = -1;
	printf("Enter element to delete: ");
	scanf("%d",&element);
	
	for(i = 0; i< SIZE; i++)
	{
		if(dizi[i] == element)
		{
			index = i;
			break;
		}
	}
	
	if(index != -1){
		
		for(i = index ; i < SIZE - 1;i++){
			dizi[i] = dizi[i + 1];
	}
		
		for(i = 0; i< SIZE -1  ;i++) 
		printf("%d ",dizi[i]);
	}
	else{
		printf("Not found. ");
	}
}

