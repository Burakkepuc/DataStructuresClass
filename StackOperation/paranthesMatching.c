#include <stdio.h>
#define SIZE 30
	char stack[SIZE];
	int top = -1;



char pop(){
	char ch;
	
	ch = stack[top];
	top--;
	return ch;
}

void push(char ch){
	top++;
	stack[top] = ch;
}

int isEmpty(int y){
	if(top == -1)
		return top;
	
}

int isPair(char op1,char op2){

	    if (op1 == '(' && op2 == ')') 
        return 1; 
    else if (op1 == '{' && op2 == '}') 
        return 1; 
    else if (op1 == '[' && op2 == ']') 
        return 1; 
    else
        return 0; 
            
}
int IsParanthesisPair(char str[]){
	int i = 0;
	char ch,op,op2;
	//printf("%s",str);
	
	ch = str[i];
	while(ch != '\0') //while ch was not equal end of str array
	{
		
	
	if (ch == '{' || ch == '(' || ch == '['){
		push(ch);
	}
	 
		 if (ch == '}' || ch == ')'|| ch == ']') 
			if(top == -1)
			{
				printf("Don't match paranthesis\n");
				return 0;
			}
			else{
				op2 = ch;
				op = pop();
					printf("%c and %c\n",op,op2);
				if(!isPair(op,op2)){
					printf("Mismatched paranthesis are:\n ");
					return 0;
				}
			}
				i++;
		ch = str[i];   
	//	printf("ch:%c\n",ch);
	}
				if(top == -1){
				printf("Balanced Paranthesis.");
				return 1;
				} 
				else{
					printf("Don't match paranthesis\n");
				}
				return 0;
	
}

	

int main(){
	char str[SIZE];
	int valid;
	
	printf("Enter Paranthesis: ");
	scanf("%s",str);

	valid = IsParanthesisPair(str);
	
	 if(valid==1)
                printf("Valid expression\n");
        else
                printf("Invalid expression\n");
 
}
