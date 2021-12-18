#include<stdio.h>
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};
struct ArrayStack* creatStack(int cap)
{
    struct ArrayStack *stack;
    stack=malloc(sizeof(struct ArrayStack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return(stack);
}
int isFull(struct ArrayStack *stack)
{
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);
}
int isEmpty(struct ArrayStack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}
void push(struct ArrayStack *stack,int item)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
}
int pop(struct ArrayStack *stack)
{
    int item;
    if(!isEmpty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    return(-1);
}
int peek(struct ArrayStack *stack)
{
    return stack->array[stack->top];
}
int main()
{
    struct ArrayStack *stack;
    stack=creatStack(4);
    int choice,item,val;
    while(1)
    {
        printf("1  push\n");
        printf("2  pop\n");
        printf("3  peek\n");
        printf("4  exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter a number: \n");
            scanf("%d",&item);
            push(stack,item);
            break;
        case 2:
            item=pop(stack);
            if(item==-1)
                printf("Stack is empty\n");
            else
                printf("pooped value is %d\n",item);
                break;
        case 3:
          {
              val=peek(stack);
              printf("Peek element is %d\n",val);
              break;
          }
        case 4:
            exit(0);
        }
    }
    return 0;
}
