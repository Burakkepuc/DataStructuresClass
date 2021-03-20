	#include <stdio.h>
    #define SIZE 30
//POSTFIX TO INFIX AS ALPHABET
	int top = - 1,stack[SIZE];

void push(int m){
	top++;
	stack[top] = m;
}

int pop(){
	int a;
	
	a = stack[top];
	top--;
	
	return a;
}

int isOperand(char ch){
if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
return 1;
else
return 0;
}


int main(){
	char postfix[SIZE],ch;
	int i=0,op1,op2,result,m;
	printf("Enter a postfix expression(as an alphabet): ");
	scanf("%s",postfix);

	
	while(postfix[i] != '\0'){
		ch = postfix[i];
		
		if(isOperand(ch)==1 ){
			printf("Enter the value of %c\n",ch);
			scanf("%d",&m);
			push(m);
		}
		else{
			op2 = pop();
			op1 = pop();
			
			switch(ch){
				case '+': 
				result = op1 + op2;
				push(result);
				break;
					case '-': result = op1 - op2;
				push(result);
				break;
					case '*': result = op1 * op2;
				push(result);
				break;
					case '/': result = op1 / op2;
				push(result);
				break;
			}
		}
		i++;
		
	}
	
	result = pop();
	printf("The result is %d",result);
	
}
