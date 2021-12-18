#include <stdio.h>
#include <stdlib.h>
 

struct node {
    int data;
    struct node* next;
};
 void reverse(struct Node** head)
{
    struct node* prev = NULL;
    struct node* current = *head;
    struct node* next = NULL;
    while (current != NULL) 
	{
        next = current->next;
 
        current->next = prev;
 
        prev = current;
        current = next;
    }
    *head = prev;
}
 
void push(struct node** head, int new_data)
{
    struct node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head);
    *head = new_node;
}
 
void printList(struct node* head)
{
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
int main()
{
	
    struct Node* head = NULL;
 
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 60);
 
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
    getchar();
}
