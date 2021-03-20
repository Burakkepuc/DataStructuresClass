#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left,*right;
};

struct node *newNode(int data){
	
	//Memory alocation
	struct node *node = (struct node *)malloc(sizeof(struct node));
	
	//Assign data to this node
	node -> data = data;
	
	//Initialize left and right children as NULL
	node->left = node -> right = NULL;
	
	return node;
}

void printinOrder(struct node* node){
	  	if (node == NULL){
		return;
		  }
		  else{
		  	printinOrder(node -> left);
		  	printf("%d ",node -> data);
		  	printinOrder(node -> right);
		  }
	  }
	  
	  


int heightOfBst (struct node *node) {
	int height;
    if (node == NULL) {
        return -1;
    }
    else {
        int left = heightOfBst(node->left);
        int right = heightOfBst(node->right);


       if(left < right)
       	height= right + 1;
       	else
       	 height = left + 1;
       	
       	return height;
   	  }

}

int main(){
	//create root
	struct node *root = newNode(1);
	
	root ->left = newNode(2);
	root -> right = newNode(3);
	
	root ->left -> left = newNode(4);
	root ->left -> right = newNode(5);

//	root ->left -> left ->left = newNode(7);	

	printf("\nMax: %d\n",heightOfBst(root));
	printinOrder(root);
	
}
