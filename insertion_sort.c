#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
 
#define MAX 100
 
	void display(int *ptr, int l); 
	void insertionsort(int *ptr, int l); 
		
	int main() 
		{ 
		int arr[MAX],size,i,number; 
		printf("\n Enter the length\n"); 
		scanf("%d",&size);
		srand(time(0)); 
				
		printf("\n Elements are\n"); 
		for(i=0;i<size;i++) 
 		{
			arr[i]=rand()%100;
		}
		
 		number=rand()%100;
		display(&arr[0],size); 
		insertionsort(&arr[0],size);
					 
			 
		printf("\n New sorted array is:\n"); 
		display(&arr[0],size); 
		return 0; 
		}
			
			
			 
	void  display(int *ptr, int l)		//Display 
	{ 
	int i; 
	for(i=0;i<l;i++) 
		{ 
			printf("\t %d ",*(ptr+i)); 
		}	 
	}
	
 
	void  insertionsort(int *ptr, int l)		//Insertion sort
	{ 
	int i,j,temp; 
		for(j=1;j<l;j++) 
			i=j-1; 
			temp=*(ptr+j); 
			
		while((i>=0)&&(temp<*(ptr+i))) 
			{ 
				*(ptr+i+1)=*(ptr+i); 
					i--; 
			} 
	*(ptr+i+1)=temp; 
	} 
 

