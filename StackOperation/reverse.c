#include <stdio.h>
#define SIZE 50

char stack[SIZE];//Our main stack to keep String as a stack structure
int top = -1;//Our stack initialization.
char element;//It will take top stack character.

void push(char item){ //push method with char parameter.
	if(top == SIZE - 1){
		printf("Overflow");
	}
	top++;//first increase the stack.
	stack[top] = item;//then put item to before we did top.
}

char pop(){ //pop function
	if(top == -1){
		printf("Underflow");
	}
	element = stack[top];//clear the element
	top--;//then decrease top.(determining new top)
	return element; // return the deleted element to new array in main
}

int main(){
	int i;
	char str[SIZE];//for printing new string.
	
	printf("Enter String: ");
	scanf("%s",str); //take string
	
	for(i=0;i<strlen(str);i++){ // from zero to lenght of array.
		push(str[i]); // push str[i] elements one by one.
	}
	for(i = 0;i<strlen(str);i++){//
	str[i] = pop(); // the element which is deleted, take from pop and send to new array.
	}
	
	printf("Reversed: %s",str); // print array.
}

