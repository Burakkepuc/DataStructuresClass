#include <stdio.h>
#include <string.h>
	char stack[30],ele;
	int top = -1;
	
	char pop(){
		
		ele = stack[top];
		top--;
		
		return ele;
	}
	
	void push(char x){
		top++;
		stack[top] = x;
	}
	
	int main(){
		char str[30];
		int i,count = 0,size;
		
		printf("Enter a string: ");
		scanf("%s",str);
		
		size = strlen(str);
		
		for(i = 0; i< size; i++){
			push(str[i]);
		}
	
		printf("\nstack:%s \n",stack);
		
		
		for(i = 0; i<size; i++){ 
			if(str[i] == pop()){
			count++;
			printf("count: %d\n",count);
			}
		}
	
		
		  
			printf("size: %d\n",size);
		
		if(count == size){
			printf("Palindrom.\n");
		}
		else{
			printf("Palindrom degil.\n");
		}
}
