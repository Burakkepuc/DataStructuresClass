#include <stdio.h>
#define SIZE 30
	int stack[SIZE];
	int top = -1;

int pop(){
	int ele;
	ele = stack[top];
	top--;
	return ele;
}

void push(int x){
	top++;
	stack[top] = x;
}

int is_operand(char ch){
	if(ch >= 'a' && ch <= 'z' || ch>= 'A' && ch<= 'Z')
	return 1;
	else
	return 0;
}

int main(){
	char stk[SIZE];
	int i = 0,op1,op2,result,opVal;
	char ch;
	
	printf("Enter postfix expression: "); //Enter postfix expression as a operand(abc+)
	scanf("%s",stk); //Take input
	printf("%s\n",stk);
	
	while(stk[i] != '\0'){// scan all array.
		
		ch = stk[i]; // take each value of array.
		
		if(is_operand(ch)){ // control value is operand or not, if it is operand
			printf("Enter the value of %c: ",ch); //Enter value of this operand.
			scanf("%d",&opVal); //Enter operand value and push it into stack
			push(opVal);//stack push code.
		}
		else{ // if it is not operand(if its operator)
			op2 = pop(); //take(pop) firs two value of stack
			op1 = pop();
			
			switch(ch){ //and computer first two operand and push it into the stack.
				case '+':
				result = op1 + op2;
				push(result); // place again on the stack.
				break; 
				
				case '-':
				result = op1 - op2;
				push(result);
				break; 
				
				case '*':
				result = op1 * op2;
				push(result);
				break; 
				
				case '/':
				result = op1 / op2;
				push(result);
				break; 
				
			}
		}
		i++; //each time increase i because it traverse all element of array.
	
		}
		
		result = pop();// Then for computiton result, show last value of stack.
		printf("Result: %d",result); //Show on the screen.
		
	}
	
