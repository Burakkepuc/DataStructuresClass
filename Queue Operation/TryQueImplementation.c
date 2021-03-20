#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1,rear = -1;


void enqueue(int);
void dequeue();
void display();

int main(){
	enqueue(1);display();
	enqueue(2);display();
	enqueue(3);display();
	dequeue();display();
	enqueue(4);display();
	enqueue(5);display();
	

}

void display(){
	int i;
		printf("\nQueues are: ");
	for(i = front; i<= rear ; i++){
		printf("%d ",queue[i]);
	}
}

void dequeue(){
	int ch;
	ch = queue[front];
	front++;
	printf("\nDeleted -> %d ", ch);
	
	if(front > rear){
		front = rear = -1;
	}
}

void enqueue(int x){
	if(rear == SIZE - 1){
		printf("The queue is full.\n");
	}
	else{
		if(front == -1){
			front = 0;
		}
		rear++; //we can't add front because first in first out
		queue[rear] = x;
		printf("\nAdded -> %d",x);
	}
}


