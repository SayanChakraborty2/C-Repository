#include<stdio.h>
#include<stdlib.h>

struct dnode {
    int data;
    struct dnode* next; 
    struct dnode* prev; 
};

void d_append(struct dnode** head_ref, int num) //adds at end 
{
    
    struct dnode* new_node = (struct Node*)malloc(sizeof(struct Node));
 	struct dnode* last = *head_ref; 
 
  
    new_node->data = num;
    new_node->next = NULL;
 
   
    if (*head_ref == NULL) 
	{
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
 
    
    while (last->next != NULL)
        last = last->next;
 
    
    last->next = new_node;
    new_node->prev = last;
 
    return;
}


void d_addatbeg(struct Node** head_ref, int num) // adds at beginning
{
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
    
    new_node->data = num;
    new_node->next = *head_ref;
    new_node->prev = NULL;
 
    
    if (*head_ref != NULL)
        *head_ref->prev = new_node;
 
    
    (*head_ref) = new_node;
}


void insertAfter(struct Node* prev_node, int num) // insert after 3rd pos (*incomplete)
{
    
    if (prev_node == NULL) 
	{
        printf("the given previous node cannot be NULL");
        return;
    }
 
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
  
    new_node->data = num;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;
 
    
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}


int countNodes() //count
{  
    int counter = 0;  
     
    struct node *current = head;  
      
    while(current != NULL) {  
          
        counter++;  
        current = current->next;  
    }  
    return counter;  
}  


void display() // display
{  
    
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of doubly linked list: \n");  
    while(current != NULL) {  
          
        printf("%d ", current->data);  
        current = current->next;  
    }  
}  
   



void DlListDeleteAnyNode(int pos) //deletion
{
    struct node* new_node;
    int i;
 
    curNode = stnode;
    for(i=1; i<pos && curNode!=NULL; i++)
    	curNode = curNode->nextptr;

 
    if(pos == 1)
		DlListDeleteFirstNode();
    
    else if(curNode == ennode)
    	DlListDeleteLastNode();
    
	else if(curNode != NULL)
    {
        curNode->preptr->nextptr = curNode->nextptr;
        curNode->nextptr->preptr = curNode->preptr;
 
        free(curNode); 
    }
    else
    {
        printf(" The given position is invalid!\n");
    }
}


int main()
{
    
    struct Node* head = NULL;
    
    append(&head, 6);
 
   
    push(&head, 7);
 
   
    push(&head, 1);
 
  
    append(&head, 4);
 
  
    insertAfter(head->next, 8);
 
    printf("Created DLL is: ");
    printList(head);
 
    getchar();
    return 0;
}
