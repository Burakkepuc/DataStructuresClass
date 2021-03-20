#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

//Inorder Traversal
void inorderTraversal(struct node *root){
	if(root == NULL)
	return;
	
	inorderTraversal((*root).left);
	printf("%d ",root->data);
	inorderTraversal(root->right);
}

void preOrderTraversal(struct node *root){
	if(root == NULL) return;

	printf("%d ",root->data);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void postOrderTraversal(struct node *root){
		if(root == NULL) return;
		
	postOrderTraversal(root->left);
	postOrderTraversal(root -> right);
	printf("%d ",root->data);
}



//Create a new node. We use for first root
struct node *createNode(value){
	struct node *newNode = malloc(sizeof(struct node));
	newNode -> data = value;
	newNode -> left = NULL;
	newNode -> right = NULL;
	
	return newNode;
}

struct node *insertLeft(struct node* root,int value){
	root->left = createNode(value);
	
	return root->left;
}

struct node *insertRight(struct node *root,int value){
	root -> right = createNode(value);
	
	return root -> right;
}




int main(){
	struct node *root = createNode(1);
	
	insertLeft(root,12);
	insertRight(root,9);
	insertLeft(root -> left,5);
	insertRight(root -> left,6);
	
	printf("\nInorder Traversal \n");
	inorderTraversal(root);
	
		printf("\nPreorder Traversal \n");
	preOrderTraversal(root);
	
		printf("\nPostorder Traversal \n");
	postOrderTraversal(root);
}


