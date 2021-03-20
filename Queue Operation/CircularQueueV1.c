#include <stdio.h>
#define SIZE 5

int queue[SIZE]; //Define queue that will be circular
int front = -1,rear = -1; // Initializing queue front and rear -1

isFull(){
	if((front == rear + 1) || (front == 0 && rear == SIZE -1)) //function that controls if circular queue full or not
	 	return 1;
	return 0;
}

void enQueue(int x){ //Typic enque operator but in 21th line*
	if(isFull())
	printf("\n Queue is full!! ");
	
	else{
		if(front == -1){
			front = 0;
		}
		rear = (rear + 1) % SIZE;//* We decrease rear + 1 and remining it Size because if it's 4, (4+1) % 5 = 0 =>Queue starts from 0 and it's circular features.
		queue[rear] = x;
		printf("\n Insterted -> %d",x);
	}
}

int isEmpty(){//function that controls if circular queue full or not
	if(front == -1)
		return 1;
	return 0;
}
int deQueue(){ //Dequeue operator first check if queue empty or not.
	int element;
	
	
	if(isEmpty()){
		printf("\n Queue is empty!! \n");
		return(-1);
	}
	
//If not empty and they are equal, they are at last element, get them to initializing position
	else{
		element = queue[front];
	
		//Q has only one element, so we reset the queue after dequeing it.
		if(front == rear){
			front = -1;
			rear = -1;
		}
		
	
		else{
			front = (front + 1) % SIZE; //We decrease rear + 1 and remaining SIZE because of being circular queue
		}
		printf("\n Deleted element -> %d \n",element); //Show deleted element
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
	deQueue();
	
	enQueue(1);
	display();
	enQueue(2);
	display();
	enQueue(3);
	display();
	enQueue(4);
	display();
	enQueue(5);
	display();
	
	deQueue();
	display();
	deQueue();
	display();
	


	
}
