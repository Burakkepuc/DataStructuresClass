#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 30
//INFIX TO POSTFIX
	char stack[SIZE];
	int top = -1;
	
	void push(char x){
		top++;
		stack[top] = x;
	}
	
	char pop(){
		char ch;
		ch = stack[top];
		top--;
		return ch;
		
	}
	
	int checkPriority(char oprt){
		if(oprt == '^')
		return 3;
		else if(oprt == '/' || oprt == '*')
		return 2;
		else if(oprt == '+' || oprt == '-')
		return 1;
		return 0;
	}

	
int isOperator(char ch){ //ch is operator
	if(ch == '^' || ch == '*' ||ch == '/' || ch == '-' || ch == '+')
	return 1;
	return 0;
}
char infixToPostfix(char infix[],char postfix[]){
	int i = 0,j = 0;
	char ch,ele; //ch for local, ele for stack
	
	//push('(');
	//strcat(infix, ")");
	
	ch = infix[i];
	while(ch != '\0'){
		
		if(ch == '('){
			push(ch);
		
		}
		
		else if(isdigit(ch) || isalpha(ch)){ //number or alphabetic control function.
			postfix[j] = ch; //if operand, push into postfix
			j++; //increase postfix top.
			
		}
	
		
		else if(isOperator(ch)){ // if its operator
			ele = pop(); // take a last value from stack
			
			while(isOperator(ele) && checkPriority(ele) >= checkPriority(ch)){ // then check stack value if its operator and bigger than infix value
				postfix[j] = ele; //add stack operation to postfix
				j++; // postfix top.
				ele = pop(); // take a last value from stack , *if its not operator.
			}
			push(ele);//*push stack again.
			push(ch);// if infix value bigger than stack, then push it into stack.
		
		}
		
		else if(ch == ')') //if it's right paranthesis.
		{
			ele = pop(); // take last stack value in ele
			while(ele !='(') //if last stack value ele not equal right parantesis
			{
				postfix[j] = ele; //add all characters into postfix until see the right paranthesis.
				j++;// increase top
				ele = pop();//take last stack value in ele for control.
			}
		
		}
		
	
		
		else
		{
			printf("\nInvalid expression!");
			exit(1);
		}
	
		i++;
		ch = infix[i];
		
	}
	postfix[j] = '\0'; //For specify last of postfix

}

int main(){
	char infix[SIZE],postfix[SIZE];
	printf("Enter Infix notation: ");
	scanf("%s",infix);
	
	infixToPostfix(infix,postfix);
		printf("Infix: %s\n",infix);
	printf("Postfix: %s",postfix);
	
}

