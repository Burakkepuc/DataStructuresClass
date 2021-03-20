#include <stdio.h>
#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;//initializing top.
int ele;

void push(){

	scanf("%d",&ele);
	if(top == MAX_SIZE - 1){
		printf("Error:Stack Overflow.");
	}
	top = top+1;
	A[top] = ele;
}

int pop(){
	if(MAX_SIZE == -1){
		printf("There is no element to delete.");
	}
	//ele = A[top];
	top--;
	
	
}

void print(){
	int i;
	for(i = 0;i<=top;i++){
		printf("Stack:%d ",A[i]);
	}
	printf("\n");
}

int main(){
	push();
	print();
	push();
	print();
	push();
	print();
	push();
	print();
	pop();
	//printf("Popped: %d\n\n",pop());
	print();

	
}
