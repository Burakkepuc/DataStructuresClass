#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Please attension big-small letter. It works with ascii value.
void push(char element);
char pop();

	char stack[30],ele;
	int top = - 1;

int main(){
	char string[30];
	int i,len,count = 0;
	
	printf("Enter String:\n ");
	scanf("%s",string);
	
	len = strlen(string);
	
	for(i = 0; i < len; i++){
		push(string[i]);
	}
	for(i = 0; i < len; i++){
		if(string[i] == pop()){// Control first string and last popping element, if they are eqaual, count+1;
			count++;
		}
	}
	if(count == len){ 
		printf("Palindrome\n");
	}
	else{
		printf("Not palindrome\n");
	}
	
}

char pop(){
	ele = stack[top];
	top--;
	
	return ele;
}

void push(char element){
	if(element == stack -1){
		printf("Overflow\n");
	}
	
	top++;
	stack[top] = element;
}
