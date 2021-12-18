#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>

#define MAX 100
 

	void display(int *ptr, int l); 
	void selectionsort(int *ptr, int l); 
	
	int main() 
	{ 
		int arr[MAX],size,i,number; 
		printf("\n Enter the length\n");
		scanf("%d",&size); 
		srand(time(0));
		 
		
		printf("\n Elements are: \n");
			for(i=0;i<size;i++) 
				{ 
					arr[i]=rand()%100; 
				} 
		number=rand()%100; 
		display(&arr[0],size); 
		selectionsort(&arr[0],size); 
		printf("\n New sorted array is:\n"); 
		display(&arr[0],size); 
		return 0; 
	} 
	
	
	void  display(int *ptr, int l) 		//display
	{ 
		int i; 
		for(i=0;i<l;i++) 
			{ 
				printf("\t%d ",*(ptr+i)); 
			} 
	} 
	
	void  selectionsort(int *ptr, int l)	//selection sort 
	{ 
		int i,j,temp,min; 
			for(i=0;i<l-1;i++) 
			{ 
				min=i; 
					for(j=i+1;j<l;j++) 
						{ 
							if(*(ptr+j)<*(ptr+min)) 
							min=j; 
						} 
					temp=*(ptr+i); 
				*(ptr+i)=*(ptr+min); 
				*(ptr+min)=temp; 
			} 
	}

