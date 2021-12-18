#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
 
#define MAX 100 


	void display(int *ptr, int l); 
	void bubblesort(int *ptr, int l); 
	
	int main() 
	{ 
		int arr[MAX],size,i,number; 
		printf("\n Enter the length \n"); 
		scanf("%d",&size);
		srand(time(0)); 
		
		printf("\n Elements are \n"); 
			for(i=0;i<size;i++) 
			{ 
				arr[i]=rand()%100; 
			}
			 
		number=rand()%100;
		display(&arr[0],size); 
		bubblesort(&arr[0],size); 
	 
		printf("\n New sorted array is:\n"); 
		display(&arr[0],size); 
	return 0; 
	}
	 
	void display(int *ptr, int l)		//diplay 
	{ 
	int i; 
		for(i=0;i<l;i++) 
		{ 
			printf("\t %d",*(ptr+i)); 
		} 
	}
	 
	void bubblesort(int *ptr, int l)	//bubble sort
	{ 
	int i,j,temp; 
	for(i=0;i<l-1;i++) 
		{ 
		for(j=0;j<l-i-1;j++) 
			{ 
			if(*(ptr+j)>*(ptr+j+1)) 
				{ 
					temp=*(ptr+j); 
					*(ptr+j)=*(ptr+j+1); 
					*(ptr+j+1)=temp; 
				} 
			} 
		} 
	}

