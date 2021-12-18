#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

struct stack 
{
    char data[MAX];
    int top;
};

int pop(struct stack *s)
{
	int tmp;
    if(s->top == -1)
    {
        printf("\nStack underflow");
        return -1;
    }
    else
    {       
		tmp = s->data[s->top];
		s->top--;
	    return tmp;
    }
    return 0;
}

void push(struct stack *s,int val)
{
	if(s->top== MAX-1)
    {
        printf("\nStack overflow\n");
        return;
    }
  	else 
    {    
		s->top++;
        s->data[s->top]=val;
    }
}

void expression(struct stack *s)
{
	s->top = -1;
	char exp[MAX],temp;
	int i, flag=1;
	printf("\n Enter the expression : ");
	gets(exp);			
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			push(s,exp[i]);
		if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if(s->top == -1)
				flag = 0;
			else
			{
				temp = pop(s);
				if(exp[i]==')'&&(temp=='{'||temp=='['))
					flag = 0;
				if(exp[i]=='}'&&(temp=='('||temp=='['))	
					flag = 0;
				if(exp[i]==']'&&(temp=='('||temp=='{'))	
					flag = 0;	
			}	
		}
	}
	if(s->top>=0)
		flag = 0;
	if(flag==1)
		printf("\n Valid Expression.");
	else
		printf("\n Invalid Expression.");
}

int main()
{
	struct stack ptr;
	ptr.top = -1;
	expression(&ptr);
	return 0;
}
