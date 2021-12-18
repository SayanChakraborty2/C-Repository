//BINARY SEARCH  
 	 	 
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
#define MAX 100 
	
	int binarysearch(int *ptr,int l, int n); 


	int main() 
		{ 
			int arr[MAX],i,number,size,pos; 
			printf("Enter the length of the array\n"); 
			scanf("%d",&size); 
				srand(time(0));
				
			for(i=0;i<size;i++) 
				{ 
					arr[i]=rand()%100; 
				} 
				number=rand()%100; 
				display(&arr[0],size); 
				printf("\n");
				
				
			printf("Enter the number you want to search\n"); 
			scanf("%d",&number); 
			pos= binarysearch(&arr[0], size, number); 
			if(pos!=-1) 
				printf("number found at %d th position\n",pos); 
			else 
				printf("number not found\n"); 
		return 0; 
		}
		
		
int display( int *ptr, int l)  //display 
	{ 
		int i; 
		printf("elements are \n"); 

			for(i=0;i<l;i++) 
			{ 
			printf("%d ",*(ptr+i)); 
			} 
	}
		
		 					 
int binarysearch(int *ptr, int l, int n)  //binary search
{ 
	int i,lb=0,ub=l-1,mid,flag; 
		while(lb<=ub) 
		{ 
			mid=(lb+ub)/2; 
					if(*(ptr+mid)<n) 
						lb=mid+1; 
				else 
					if(*(ptr+mid)>n) 
						ub=mid-1; 
				else 
					if(*(ptr+mid)==n) 
					 	return mid; 
					 
 			return l-1; 
		} 
}
