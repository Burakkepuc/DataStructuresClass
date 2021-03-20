#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1,rear = -1;

isFull(){
	if((front == rear + 1) || (front == 0 && rear == SIZE -1))
	 	return 1;
	return 0;
}

void enQueue(int x){
	if(isFull())
	printf("\n Queue is full!! ");
	
	else{
		if(front == -1){
			front = 0;
		}
		rear = (rear + 1) % SIZE;
		queue[rear] = x;
		printf("\n Insterted -> %d",x);
	}
}

int isEmpty(){
	if(front == -1)
		return 1;
	return 0;
}
int deQueue(int x){
	int element,i;
	
	
	if(isEmpty()){
		printf("\n Queue is empty!! \n");
		return(-1);
	}
	
		
	else if{
		element = queue[front];
	
		//Q has only one element, so we reset the queue after dequeing it.
		if(front == rear){
			front = -1;
			rear = -1;
		}
		
		
	
		else{
			front = 0; // Fronts start 0 because it will delete from 0 to K-th
			while(front != x){ //we specify x from function
					//printf("POINT %d ",element); 
					front = (front + 1) % SIZE; //It will come next element.
					element = queue[front]; //
					printf("\nDeleted -> %d \n",element);
			}
		
		}
		//printf("\n Deleted element -> %d \n",element);
		return element;
	}
}

void display(){
	int i;
	if(isEmpty())
		printf("\n Empty Queue\n");
	else{
		printf("\n Front -> %d ", front);
		printf("\n Items -> ");
		for(i = front; i != rear; i = ( i + 1) % SIZE){ 

			printf("%d ",queue[i]);
		}
		printf("%d", queue[i]); //For the last element.
		printf("\n Rear -> %d \n",rear);
	}
	
}

int main(){

	
	enQueue(1);

	enQueue(2);

	enQueue(3);

	enQueue(4);

	enQueue(5);

	display();
	deQueue(3);
		display();

	
}
