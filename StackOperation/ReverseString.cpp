#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stack[30],top = -1,value;

char pop(){ // pop function with return value because we will showed the pop value in main
	value = stack[top];
	top--;
	return value;//**
}

void push(char value){// normal stack with taking value
	top++;
	stack[top] = value;
}

int main(){
	char str[30],element;
	int z,i;
	printf("Enter a string: ");
	scanf("%s",str); // main array
	
	z = strlen(str); // take array range
	
	for(i = 0; i< z;i++){ 
		push(str[i]); // push in stack
	}
	
	printf("Reverse of a string: \n"); 
	for(i = 0; i< z;i++){
		element = pop(); //Last in first out
		printf("%c",element); // Show the elements as char.
	}
	
}
