#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char x){
	if(top >= SIZE -1){
			printf("Overflow");
	}
	top++;
	stack[top] = x;
}

int pop(){
	char ch;
	ch = stack[top];
	top--;
	
	return ch;
}

int is_operator(char op){ 
	
	if(op == '^' || op == '*' || op == '/' || op == '+' || op == '-')
	return 1;
	return 0;
	
}

int check_precedence(char op){ //Which operator is bigger ? Check the presedence
	if(op == '^'){
		return 3;
	}
	else if(op == '*' || op == '/'){
		return 2;
	}
	else if(op == '+' || op == '-'){
		return 1;
	}
	return 0;
}

void infixToPostfix(char infix[],char postfix[]) //Take both of them as array, postfix is empty
{
	char el,item; //define items as char
	int infixTop=0,postfixTop=0; //its for infix and postfix top. Started from 0
	
	item = infix[infixTop]; // Take infix as a char.
	
	while(item != '\0') // scan the infix from left to right
	{
		if(item == '(') //if item is left paranthesis, push into char stack.
			push(item);
			
	 else if(isdigit(item) || isalpha(item)){ //if number or alphabet
	 	postfix[postfixTop] = item; //push into postfix
	 	postfixTop++;//increase postfix top.
	 }
	 
	else if(is_operator(item)){ // if it item is operator
		el = pop(); // take stack last operator.
		printf("EL: %c\n",el);
		
		while(is_operator(el) &&check_precedence(item) > check_precedence(el)) //check last stack operator is bigger than in infix op
		{
			postfix[postfixTop] = el;//enter postrifx last stack operator
			postfixTop++;//top postfix
			el = pop(); //take presedence postfix op
		}
		push(el);
		push(item);
	}
	else if(item == ')')
	{
		el = pop();
		while(el != '('){
		
				postfix[postfixTop] = el;
				postfixTop++;
				el = pop();
				}
			}
			else
			{
				printf("\nInvalid expression!");
				
			}
			infixTop++; //Increase infix counter.
			item = infix[infixTop]; //Take next infix.
		}
		//postfix[j] = '\0';
		
	}


int main(){
	char infix[SIZE], postfix[SIZE]; // one array is infix one is postfix 
	printf("Enter a valid infix expression:");
	scanf("%s",infix); // Enter infix
	
	infixToPostfix(infix,postfix); //Ýnfix is not empty, postfix is empty
	printf("\nEquivalent postfix expression is : %s",postfix);
}
