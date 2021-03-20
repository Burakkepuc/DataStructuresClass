#include <stdio.h>
#define SIZE 5

int queue[SIZE],rear = -1,front = -1;

int isEmpty(){
	if(front == -1)
	return 1;
	return 0;
}

int isFull(){
	if((front == (rear + 1)) % SIZE  || (front == 0 && rear == SIZE -1))
	return 1;
	return 0;
}

int deQueue(){
	int y;
	if(isEmpty()){
		printf("\nUnderflow Empty");
		return -1;
	}	
	else{
		y = queue[front];
		front = (front + 1) % SIZE;
		printf("\nDeleted -> %d",y);
		
		if(front == rear){
		front = rear = -1;
		}
	}
}

void enQueue(int x){
	if(isFull()){
		printf("\nOverflow");
	}
	
	else{
		if(isEmpty())
		front = 0;
	rear = (rear + 1 ) % SIZE; //Its code that after 0 it will evaluate 0
	queue[rear] = x;
	printf("\nAdded -> %d",x);
	}

	
}
void display(){
	if(isEmpty()){
		printf("\n Empty Queue\n");
	}
	else{
			int i;
	printf("\n Front -> %d",front);
	printf("\nElement in queue -> ");
	for(i = front; i != rear; i = (i+1) % SIZE){
		printf("%d ",queue[i]);
		}
		printf("%d ",queue[i]);
		printf("\n Rear -> %d \n",rear);

	}
}



int main(){
	display();
	enQueue(1);	display();
	enQueue(2);	display();
	enQueue(3);	display();
	enQueue(4);	display();
	enQueue(5);	display();
	deQueue();
	display();

	enQueue(1);
	display();
	
	
	

			
	

		
}
