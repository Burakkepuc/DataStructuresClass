#include <stdio.h>

struct node{
	int data;
	struct node *next;
};

void printList(struct node *n){
	while (n != NULL){
		printf("%d\n",n->data);
		n = n -> next;
	}
	printf("\n");
}

struct node * deletefromBeg( struct node *first )
{
	 
	 if ( first != NULL )
    {
        struct node *temp = first;
        first = first->next;
        free( temp );
    }

    return first;
	
	
	
}

int main(){
	struct node *first = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));
	struct node *forth = malloc(sizeof(struct node));
	
	first->data = 1; //assing data in first node
	first -> next = second; // link first node with second node
	
	second -> data = 2;
	second -> next = third;
	
	third -> data = 3;
	third -> next = forth;
	
	forth -> data = 4;
	forth->next = NULL;
	
	printList(first);
	
	first = deletefromBeg( first );

	
		printList(first);

}
