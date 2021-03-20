#include <stdio.h>
#define SIZE 5

int stack[SIZE],top = - 1,x;

push(){
	printf("Enter element: ");
	scanf("%d",&x);

	if(x == SIZE - 1){
		printf("Overflow. You can't add element into stack.");
	}

	
	
	top = top + 1;
	stack[top] = x;
}

pop(){
	int ele;
	if(x == -1){
	printf("It's underflow, the stack is empty.");
	}
	ele = stack[top];
	top--;
	printf("Deleted element is %d\n ",ele);
}

display(){
	int i;
	for(i = top; i>= 0;i--){
		printf("%d\n",stack[i]);
	}
}

int main(){
	int n,i,choice,loop;
	
	do{
		printf("1)Push\n2)Pop\n3)Display\n\n");
		scanf("%d",&choice);
		
			switch(choice){
		case 1:
			printf("How many element do you add? ");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
			default:
				printf("Wrong choice");
	}
	printf("Do you want to continue? 1 or 0: \n");
	scanf("%d",&x);	
	}while(loop != 0);

	
}
