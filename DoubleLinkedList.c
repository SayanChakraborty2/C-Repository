#include<stdio.h>
#include<stdlib.h>

struct dnode
{
	int data;
	struct dnode *prev;
	struct dnode *next; 
};
/*adds a new node at the end of the doubly linked list*/
void d_append(struct dnode **s, int num);
/*adds a new node at the beginning of the doubly linked list*/
void d_addatbeg(struct dnode **s, int num);
/*adds a new node after the specified number of nodes (loc; loc = 3 => add the new
node after 3 nodes in the existing list*/
void d_addafter(struct dnode *q, int loc, int num); //loc is not equal to 0
/*displays the contents of the linked list*/
void d_display (struct dnode *q);
/*counts the number of nodes present in the linked list*/
int d_count (struct dnode *q);
/*deletes the specified node from the doubly linked list with the value num*/
void d_delete(struct dnode **s, int num);

int main()
{
	struct dnode *head= NULL;//(struct dnode*)malloc(sizeof(struct dnode));
	//head->next=NULL;
	//head->prev=NULL;
	int num,ch,val,loc,count;
	do
	{
		printf("\n 1. To add Node at End of DLL \n 2. To add Node at Beginning of DLL \n 3. To add Node at a specific position of DLL \n 4. To Delete specific valued Node in DLL \n 5. To count number of Node in DLL \n 6. To Display the DLL \n 7. EXIT \n Please Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the value: \n");
				scanf("%d",&num);
				d_append(&head,num);
				break;
			case 2:
				printf("enter the value: \n");
				scanf("%d",&num);
				d_addatbeg(&head,num);
				break;
			case 3:
				printf("enter the value: \n");
				scanf("%d",&num);
				printf("enter the location :\n");
				scanf("%d",&loc);
				d_addafter(head,loc,num);
				break;
			case 4:
				printf("enter the value to be be deleted: \n");
				scanf("%d",&val);
				d_delete(&head,val);
				break;
			case 5:
				count=d_count(head);
				printf("Number of nodes are: %d\n",count);
				break;
			case 6:
				printf("The DLL is: \n");
				d_display(head);
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Wrong choice! enter your choice again\n");
		}
		
	}while(ch!=7);
	return 0;
}

void d_append(struct dnode **s, int num)
{
	struct dnode *ptr;
	struct dnode *new_node=(struct dnode*)malloc(sizeof(struct dnode));
	new_node->prev=NULL;
	new_node->data=num;
	new_node->next=NULL;
	ptr=(*s);
	if((*s)==NULL)
    {  
		new_node->next=NULL;
       	(*s)=new_node;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=new_node;
		new_node->prev=ptr;
		new_node->next=NULL;
	}
}

void d_addatbeg(struct dnode **s,int num)
{
	struct dnode *new_node=(struct dnode*)malloc(sizeof(struct dnode));
	struct dnode *ptr;
	new_node->prev=NULL;
	new_node->data=num;
	new_node->next=NULL;
	ptr=(*s);
	new_node->next=ptr;
	ptr->prev=new_node;
	(*s)=new_node;
}

void d_addafter(struct dnode *q, int loc, int num)
{
	int i=1;
	struct dnode *new_node=(struct dnode*)malloc(sizeof(struct dnode));
	struct dnode *ptr1,*ptr2;
	ptr1=q;
	while((i<loc) && (ptr1!=NULL))
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
		i=i+1;
	}
	if((ptr1!=NULL) && (i==loc))
	{
		new_node->data=num;
		new_node->next=ptr1;
		ptr1->prev=new_node;
		ptr2->next=new_node;
		new_node->prev=ptr2;
	}
	else
		printf("Position not Found \n");
}

void d_display(struct dnode *q)
{
	while(q->next!=NULL)
	{
		printf("%d	",q->data);
		q=q->next;
	}
	printf("%d	",q->data);
}

int d_count(struct dnode *q)
{
	int c=0;
	while(q!=NULL)
	{
		c++;
		q=q->next;
	}
	return c;
}

void d_delete(struct dnode **s,int num)
{
	int temp;
	struct dnode *ptr1,*ptr2;
	ptr1=(*s);
	while((ptr1->data != num) && (ptr1!=NULL))
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
	}
	if((ptr1!=NULL) && (ptr1->data == num))
	{
		temp=ptr1->data;
		ptr2->next = ptr1->next;
		(ptr1->next)->prev = ptr1->prev;
		ptr1->next = NULL;
		ptr1->prev = NULL;
		free(ptr1);
		printf("Element removed successfully\n");
		//return(temp);
	}
	else
		printf("Element not Found \n");
}
