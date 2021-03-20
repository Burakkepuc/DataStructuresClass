#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};


int main(){
	struct node *head = malloc(sizeof(struct node));
	struct node *current = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));
	
	head ->data = 10;
	head ->next = current;
	
	current -> data = 20;
	current->next = third;
	
	third -> data = 30;
	current->next = NULL;
	
	printf("%d\n",head->data );
	printf("%d\n",current->data );
	printf("%d\n",third->data );

	
}
