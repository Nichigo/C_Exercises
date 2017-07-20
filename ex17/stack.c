#include <stdio.h>
#define MAXSIZE 8
int stack[MAXSIZE];
int top = -1;

int isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

int isFull()
{
	if(top == MAXSIZE -1)
		return 1;
	else
		return 0;
}

int peek()
{
	return stack[top];
}

int pop()
{
	int data;
	
	if(!isEmpty())
	{
		data = stack[top];
		top = top-1;
		return data;	
	}
	else
	{
		printf("Stack empty!\n");
	}
	return -1;
}

void push (int data)
{
	if(!isFull())
	{
		top = top + 1;
		stack[top] = data;
	}
	else
	{
		printf("Stack full\n");
	}
}
int main (int argc, char* argv[])
{
	//push into the stack
	push(1);
	push(2);
	push(3);
   	push(4);
   	push(5);
   	push(6);
   	push(7);
   	push(8);
	//should be full here
	push(9);

	//printf stack data
	while(!isEmpty())
	{
		int data = pop();
		printf("%d\n",data);
	}

	return 0;
}
