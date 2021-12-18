#include<stdio.h>
#include<stdlib.h>

struct node
{  int data;
   struct node *next;
};


void createList(int n);
void reverseList();
void displayList();


int main()
{
    int n, choice;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

	printf("Data in the list \n");
    displayList();

    
    printf("\nPress 1 to reverse the order of singly linked list\n");
    scanf("%d", &choice);
    
    if(choice == 1)
    {
        reverseList();
    }

    else
		printf("\nData in the list\n");
    displayList();

    return 0;
}



void createList(int n)
{
    struct node *newnode, *temp, *head;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        
        printf("Enter first node: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL; 

        temp = head;

        
        for(i=2; i<=n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));

            
            if(newnode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter node %d:  ", i);
                scanf("%d", &data);

                newnode->data = data; 
                newnode->next = NULL; 

                temp->next = newnode; 
                temp = temp->next;
            }
        }

        printf("linked list created\n");
    }
}



void reverseList()
{
    struct node *prevnode, *curnode, *head;

    if(head != NULL)
    {
        prevnode = head;
        curnode = head->next;
        head = head->next;

        prevnode->next = NULL; 

        while(head != NULL)
        {
            head = head->next;
            curnode->next = prevnode;

            prevnode = curnode;
            curnode = head;
        }

        head = prevnode; 

        printf("list reversed\n");
    }
}


void displayList(struct node *head)
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;               
        }
        return ;
    }
}
