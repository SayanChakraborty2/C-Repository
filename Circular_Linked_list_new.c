#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void appendNode();
void display();
void deleteNode();
void reverseCLL();

int main()
{

    int choice = 0;
    while (choice != 6)
    {
        printf("\n1.Insert in Begining\n2.Insert at End\n3.Delete a Node\n4.Reverse List\n5.Display\n6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            appendNode();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            reverseCLL(&head);
            printf("List reversed\n");
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice!\n");
        }
    }
}

void beginsert(struct node *ptr)
{
    struct node *temp;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the data:");
        scanf("%d", &value);

        ptr->data = value;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
        printf("\nNode Inserted\n");
    }
}
void appendNode(struct node **q, int num)
{
    struct node *temp;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (q == NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("Enter data:");
        scanf("%d", &num);
        ptr->data = num;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
        printf("\nNode inserted");
    }
}

void deleteNode(struct node **q)
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nUnderflow");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            ptr = ptr->next;
            ptr->next = head->next;
            free(head);
            head = ptr->next;
            printf("\nNode deleted");
        }
    }
}
void reverseCLL(struct node **q)
{
    struct node *prev, *cur, *next, *last;
    if (*q == NULL)
    {
        printf("Cannot reverse empty list\n");
        return;
    }
    last = (*q);
    prev = (*q);
    cur = (*q)->next;
    *q = (*q)->next;

    while (*q != last)
    {
        *q = (*q)->next;
        cur->next = prev;
        prev = cur;
        cur = *q;
    }
    cur->next = prev;
    *q = prev;
}
void display(struct node *q)
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("Empty");
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n", ptr->data);
    }
}
