#include <stdio.h>
#define SIZE 5

int queue[SIZE];//Define queue that will be circular
int front = -1,rear = -1;// Initializing queue front and rear -1

isFull(){
	if((front == rear + 1) || (front == 0 && rear == SIZE -1))//function that controls if circular queue full or not
	 	return 1;
	return 0;
}

void enQueue(int x){//Typic enque operator but in 21th line*
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
int deQueue(int x){//Dequeue operator first check if queue empty or not.It takes parameter because it will start 0 to goes k-th element.
	int element,i;
	
	
	if(isEmpty()){//Check if queue is empty.
		printf("\n Queue is empty!! \n");
		return(-1);
	}
	
		
	else { //If it's not empty
		element = queue[front]; //Take element for what It was deleted
	
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

void display(){ //Display starts front and to end because our queue operation is between them
	int i;
	if(isEmpty())
		printf("\n Empty Queue\n");
	else{
		printf("\n Front -> %d ", front);
		printf("\n Items -> ");
		for(i = front; i != rear; i = ( i + 1) % SIZE){ //we use remainder because it's circular "queue(4+1) % 5 = 0, It starts from 0 again."

			printf("%d ",queue[i]);
		}
		printf("%d", queue[i]); //For the last element.
		printf("\n Rear -> %d \n",rear); //Show the rear element.
	}
	
}

int main(){

	
	enQueue(1);

	enQueue(2);

	enQueue(3);

	enQueue(4);

	enQueue(5);
//	display();
	
	deQueue(3);
	display();
	
	enQueue(6);
	enQueue(7);
	
	display();
	
}
