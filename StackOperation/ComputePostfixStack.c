#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
#include <string.h>
#include <ctype.h>
//POSTFIX TO INFIX
 int stack[SIZE],top = -1;

void push(int x){
	top++;
	stack[top] = x;
	
}

int pop(){
	int opt; //Values coming as integer from evaluatePostfix
	opt = stack[top];
	printf("OPT: %d\n",opt);
	top--;
	
	return opt;
}

void evaluatePostfix(char arr[]){
	char ch;
	int i = 0,op1,op2,res;
	
	printf("%s\n",arr);
	while(arr[i] != '\0'){
		ch = arr[i];
		if(isdigit(ch)){
			push(ch - '0'); //This is push real value of ch not ascii value.(push value as an int)
			
			printf("stack[%d]:%d\n",i,stack[i]);
		}
		else{
			op2=pop();
			op1=pop();
	  	printf("%d\t%d\n",op2 ,op1);
			switch(ch){
				case '+':
					res = op1 + op2;
					push(res);
					break;
					
					case '-':
					res = op1 - op2;
					push(res);
					break;
					
					case '/':
					res = op1 / op2;
					push(res);
					break;
					
					case '*':
					res = op1 * op2;
					push(res);
					break;
			}
	
		}
		i++;
	}
		res = pop();
		printf("int last value %d",res);
}

int main(){
	char array[SIZE];
	
	printf("Enter a postfix expression for computation(as a number): ");
	scanf("%s",array);
	
 evaluatePostfix(array);
	
}
