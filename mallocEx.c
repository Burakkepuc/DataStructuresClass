#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int n,i;
	printf("Enter an array size: ");
	scanf("%d",&n);
	int *A = (int *)malloc(n*sizeof(int)); //dynamic allocated array without initialization
	//int *A = (int *)calloc(n,sizeof(int)); //contiguous allocation with initializion value(not garbage)

	for( i = 0; i < n; i++ ){
		A[i] = i+1;
		
	}
	
	int *B = (int *)realloc(A, (n/2)*sizeof(int));
	printf("Prev block adress: %d, new adress = %d\n",A,B);
	
	//free(A);
	
	
	for( i = 0; i < n*2; i++ ){
		printf("%d %d \n",i+1,B[i]);
	}
}
