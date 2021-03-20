#include <stdio.h>
#define SIZE 30
	char stack[SIZE];
	int top = -1;



char pop(){  // general pop stack function, return type char 
	char ch;  //it will take value as a char.
	
	ch = stack[top]; // first take value to return
	top--; // then decrease the top.
	return ch; // return last stack value which is returned
}

void push(char ch){ //push stack value, no return type but it takes parameter.
	top++; // first increase the top 
	stack[top] = ch; // then add value to stack top.
}


int isPair(char op1,char op2){ // paranthesis pair function, return type int ant it takes 2 parameter to compare them.

	    if (op1 == '(' && op2 == ')') 
        return 1; 
    else if (op1 == '{' && op2 == '}') 
        return 1; 
    else if (op1 == '[' && op2 == ']') 
        return 1; 
    else
        return 0;  
}

int IsParanthesisPair(char str[]){ // Our critical function that takes 1 array from main method and turn int value to main
	int i = 0; // loop value
	char ch,op,op2; // op and op2 will compare above method
	
	ch = str[i]; // we will take one by one what array have(started str[0])
	
	while(ch != '\0') //while ch was not equal end of str array
	{	
		
		if (ch == '{' || ch == '(' || ch == '['){ // If left paranthesis, push it onto array.
			push(ch);
		}
	 
		  if (ch == '}' || ch == ')'|| ch == ']') { // if right paranthesis and
		 
		 	if(top == -1) // stack is empty, the paranthesis don't match. /Just has 1 right paranthesis.)
			{
				printf("Don't match paranthesis\n");
				return 0; //return to int for invalid value.
			}
			else{
				op = pop(); // take last stack value
				op2 = ch; // our array value
				 printf("%c and %c\n",op,op2);//Its for control if they don't have garbage or sth.
					
				if(isPair(op,op2) == 0){ // If they don't pair, Mismatched paranthesis were entered.
					printf("Mismatched paranthesis.\n ");
					return 0; // it return 0 to main to invalid value.
				}
			}
		 }
		i++; //increase while one by one
		ch = str[i];    // take value from array one by one
	}
		//when loop was finish, if top is -1, there is no paranthesis in stack and paranthesis match.
				if(top == -1){
				printf("Balanced Paranthesis.");
				return 1; //valid value.
				} 
				else{
					printf("Don't match paranthesis\n"); //if top still has value
					return 0; //invalid value.
				}
				
	
}

	

int main(){
	char str[SIZE]; //Local array to keep values that we entered.
	int valid; // I use to keep return statement
	
	printf("Enter Paranthesis: ");
	scanf("%s",str); //Take value from user.

	valid = IsParanthesisPair(str); //It will return 1 or 0
	
	 if(valid==1) // if its 1, its valid.
                printf("Valid expression\n");
        else //if its 0, its invalid.
                printf("Invalid expression\n");
 
}
