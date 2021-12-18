 

//LINEAR SEARCH: 
 
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
 
 
#define MAX 100 
 
 
void display(int *ptr ,int l);
int linearsearch(int *ptr,int l,int n); 
 
int main() 
	{ 
		int arr[MAX],size,i,number,pos; 
 		printf("enter the length \n"); 
		 scanf("%d",&size); 
		 srand(time(0));
		  
		 for(i=0;i<size;i++) 
			{ 
				arr[i]=rand()%100; 
			} 
			
		number=rand()%100; 
		display(&arr[0],size); 
		printf("\n");
		 
		printf("Enter the number you want to search\n"); //number input
		scanf("%d",&number); 
		pos=linearsearch(&arr[0],size,number); 
			if(pos!=-1) 
				printf("Number found at %d th position\n",pos); 
			else 
				printf("Number is not present"); 
			return 0; 
	}
	
		 
void display( int *ptr, int l)  //display 
{ 
	int i; 
	printf("elements are \n"); 

	for(i=0;i<l;i++) 
	printf("%d ",*(ptr+i)); 
			 
}
		
		 
int linearsearch(int *ptr,int l, int n)  //linear search
	{ 
	int i; for(i=0;i<l;i++) 
		{ 
			if(*(ptr+i)==n)
 				return i; 
		} 
		return -1; 
	} 


	 	 


 


 


  
 
 
 
 

