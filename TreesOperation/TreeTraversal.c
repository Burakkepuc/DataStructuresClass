#include <stdio.h>
#include <stdlib.h>

 struct node 
 {
	int data;
	struct node* left;
	struct node* right;	
 };
 
  struct node *newNode(int data){ //it's function with return type.
  	
  	struct node *node = (struct node*)malloc(sizeof(struct node));
  	node -> data = data;
  	node -> left = NULL;
  	node -> right = NULL;
  	
  	return (node);
  }
  
  void printPostOrder(struct node* node){
  	
	  if(node == NULL){
	
	  }
	  else{
	  	printPostOrder(node ->left);
	  	printPostOrder(node ->right);
	  	printf("%d ",node -> data);	  	
	  }
}
	  void printinOrder(struct node* node){
	  	if (node == NULL){
	
		  }
		  else{
		  	printinOrder(node -> left);
		  	printf("%d ",node -> data);
		  	printinOrder(node -> right);
		  }
	  }
	
	  void printPreOrder(struct node* node){
	  	if(node == NULL){
		  }
		  else{
		  	printf("%d ",node -> data);
		  	printPreOrder(node -> left);
		  	printPreOrder(node -> right);
		  }
	  }
	  
	  int main(){
	  		struct node *root = newNode(1);
	  		root -> left = newNode(2);
	  		root -> right = newNode(3);
	  		root -> left -> left = newNode(4);
	  		root -> left -> right = newNode(5);
	  		
	  		printf("\nPreorder traversal of tree\n");
	  		printPreOrder(root);
	  		
	  			printf("\nPostorder traversal of tree\n");
	  			printPostOrder(root);
	  			
	  				printf("\nInOrder traversal of tree\n");
	  				printinOrder(root);
	  			
	  		getchar();
	  		return 0;
	  }
	  
	  

	  
  
