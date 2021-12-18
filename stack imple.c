
#include <stdio.h>
#define MAXSIZE 5
 
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
 
void push(void);
int  pop(void);
void display(void);
 
void main ()
{
    int choice;
    int option = 1;
    s.top = -1;
 
    printf("Stack oparation\n");
    while (option)
    {
       
        printf("\n Press 1 to PUSH \t Press 2 to POP \t Press 3 to DISPLAY \t Press 4 to END \n");
        
		printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush(stdin);
        printf("Press 1 to CONTINUE \t Press 0 to END\n");
        
        scanf("%d", &option);
    }
}

void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed: ");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("popped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n elements in the stack are \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\t", s.stk[i]);
        }
    }
    printf ("\n");
}
