#include<stdio.h>

#define MAX 10

int stack[MAX], top = -1;
int push(int x);
int pop();
void display();

int main()
{
	int value,prompt;
	do 
	{
		printf("\n press 1 to PUSH \n press 2 to POP \n press 3 to display \n 0 to End \n");
		scanf("%d",&prompt);
		switch(prompt)
		{
			case 1: printf("\n enter the value to push: ");
					scanf("%d", &value);
					push(value);
					break;
			
			case 2: printf("\n Popped Value = %d",pop());
					break;
					
			case 3: display(value);
					
			case 0: break;
			
			default: printf("\n incorrect choice");
		}
	}
	while(prompt!=0);
}


int push(int x)		//push
{
	if(top == MAX-1)
		printf("\n stack overflow");
	else
		stack[++top]=x;
}

int pop()			//pop
{
	if(top == -1)
	{
		printf("\n not enough elements in stack");
		return 0;
	}
	else
		return stack[top--];
}

void display()		//display
{
	int i;
	if(top == -1)
		printf("\n not enough elements in stack");
	else
		{
		for(i=top; i>0; i--)
			printf("%d \t",&i);
		}
}
