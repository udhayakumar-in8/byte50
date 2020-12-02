#include<stdio.h>
// define queue size is 5
#define MAX  5

void enqueue(int);
void dequeue(void);
void display(void);

static int rear,front = -1;
int Array[MAX];

int main(void)
{
	printf("main Function Entering in Queue \n");

	//pushing elements in queue
	enqueue(1);
 	enqueue(2);
	enqueue(3);
	enqueue(4);
	
	//popout elements in enqueue
	dequeue();

	//Display contents
	display();
}

void enqueue(int ei)
{
	if(rear == MAX - 1) {
		printf("\nStack is Full!\n");
	}
	else{
		if( front == -1)
			front = 0;
		rear++;
		Array[rear] = ei;
		printf("\nInserted -> %d ", ei);
	}
}

void dequeue()
{
	if(front == -1)
		printf("queue is empty\n");
	else {
		printf("deleted the item %d\n ", Array[front]);
		front++;
		// if going to beyond the rear that outbound
		if(front > rear)
			front = rear = -1;
		
	}
}

void display()
{
	printf("\nDisplay function\n");
	if(rear == -1)
		printf("Queue Is Empty!\n");
	else
	{
		for(int i= front; i <= rear ; i++)
			printf("the items are %d \n,",Array[i]);
	}
		
}