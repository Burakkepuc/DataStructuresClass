#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main(){
	deQueue();
	
enQueue(1);
	enQueue(2);
	enQueue(3);
	display();
	enQueue(4);
	enQueue(5);
	enQueue(6);
	display();
	

}

void display(){
	if(rear == -1){
		printf("\nQueue is Empty!!!");
	}
	else{
		int i;
		printf("\nQueue elements are: \n");
		for(i = front; i<= rear; i++)
		printf("%d ",items[i]);
	}
	printf("\n");
}


void enQueue(int x){
	if(rear == SIZE - 1)
	printf("\nQueue is Full!");
	else{
		if(front == -1){
		front = 0;
		}
		rear++;
		items[rear] = x;
		printf("Inserted -> %d",x);
	}
}

void deQueue(){
	int y;
	if(front == -1){
		printf("Underflow.Queue is empty!\n ");
	}
	else{
	y = items[front];
	printf("\nDeleted: %d",y);
	front++;
	
	if(front > rear)
	front = rear = -1;
	}
}
