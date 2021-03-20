#include <stdio.h>
#include <stdlib.h>

struct BstNode{
	int data;
	struct BstNode *left;
	struct BstNode *right;
};

struct BstNode *GetNewNode(int data){ //Return type is struct. Its for root.
	struct BstNode *newNode = (struct BstNode*)malloc(sizeof(struct BstNode)); //Seperate memory in heap as manuel
	newNode -> data = data;
	newNode -> left = NULL;
	newNode -> right = NULL;
	
	return newNode;
}

struct BstNode * Insert(struct BstNode* rootPtr,int data){
	if(rootPtr == NULL){
		rootPtr = GetNewNode(data);
	}
	
	else if(data <= rootPtr -> data){
		rootPtr -> left = Insert(rootPtr ->left,data);
	}
	
	else{
		rootPtr -> right = Insert(rootPtr -> right,data);
	}
	return rootPtr;
}

void inorder(struct BstNode* rootPtr) 
{ 
    if (rootPtr != NULL) { 
        inorder(rootPtr->left); 
        printf("%d \n", rootPtr->data); 
        inorder(rootPtr->right); 
    } 
} 

int main(){
	struct BstNode *rootPtr = NULL;
	rootPtr = Insert(rootPtr,30);
	rootPtr = Insert(rootPtr,20);
	rootPtr = Insert(rootPtr,40);
	rootPtr = Insert(rootPtr,70);
	rootPtr = Insert(rootPtr,60);
	rootPtr = Insert(rootPtr,80);
	  inorder(rootPtr); 
}
