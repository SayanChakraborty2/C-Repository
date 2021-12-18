#include <stdio.h>
#include<stdlib.h>

void display(int *, int);
int Count_Odd(int *,int);
int Find_Smallest(int *, int );
void Reverse(int *, int );
void Print_Frequency(int *, int);
void Replace( int *, int , int ,int);
int Search_Prime(int *,int );


void main()
{

	int arr[10],i,n,choice,x,y,no,small,prime_pos;
	printf("Enter the length and then values \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}


	
	do			//menu
	{
		printf("\n1.Display 2.CountOdd  3.FindSmallest  4.Reverse 5.PrintFrequency 6.Replace 7.SearchPrime 8.Exit \n");
		printf("Enter choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				display(&arr[0], n);
				break;
			case 2:
				no= Count_Odd(&arr[0], n);
				printf("number of odd  %d \n",no);
				break;
			case 3:
				small=Find_Smallest(&arr[0], n);
				printf("smallest value is %d \n",small);
				break;
			case 4:
				Reverse(&arr[0], n);
				display(&arr[0], n);
				break;
			case 5:
				Print_Frequency(&arr[0], n);
				break;
			case 6:
				printf("enter the elements to be replaced: \n");
				printf("enter number to be replaced: \n");
				scanf("%d",&x);
				printf("enter number to be replaced with: \n");
				scanf("%d",&y);
				Replace(&arr[0], n, x, y);
				display(&arr[0], n);
				break;
			case 7:
				prime_pos=Search_Prime(&arr[0],n);
				if(prime_pos !=-1)
					printf("prime number: %d \n",prime_pos);
				else
					printf("no prime numbers\n");
				break;
			case 8:
				break;
			default:
				printf("invalid choice \n");
				break;
		}
		
	}while(choice!=8);		
}





void display(int *ptr, int a)		//display
{
	int i;
	printf("values are: \n");
	for(i=0;i<a;i++)
	{
		printf("%d \n",*(ptr+i));
	}
}




int Count_Odd(int *ptr,int a)		//counts the odd
{
	int i,c=0;
	for(i=0;i<a;i++)
	{
		if(*(ptr+i)%2==1)
			c++;
			
	}
	return c;
}



int Find_Smallest(int *ptr, int a)		//find smallest
{
	int i,smallest=*ptr;
	for(i=0;i<a;i++)
	{
		if(*(ptr+i)< smallest)
			smallest=*(ptr+i);
			
	}
	return smallest;
	
}



void Reverse(int *ptr, int a)		//reverse
{
	int i,temp;
	for(i=0;i<a/2;i++)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+a-i-1);
		*(ptr+a-i-1)=temp;
	}
}



void Print_Frequency(int *ptr, int a)		//freqency
{
	int i,c,j, b[a];
	printf("frequency \n");
	for(i=0; i<a; i++)
    {
        c=1;
        if(b[i]==1)
        	continue;
        	
		for(j=i+1; j<=a; j++)     
        {
           if(*(ptr+j)==*(ptr+i))
            {
		       ++c;
		       b[j]=1;
		    }
	    }
	    printf(" %d --- %d \n",*(ptr+i), c);
	}      
}



void Replace( int *ptr, int a, int x,int y)		//replace
{
	int i;
	for(i=0;i<a;i++)
	{
		if(*(ptr+i)==x)
			*(ptr+i)=y;
	}
	
}




int Search_Prime(int *ptr,int a)		//prime searching
{
	int i,j,c;
	for(i=0;i<a;i++)
	{
		c=0;
		for(j=1;j<=*(ptr+i);j++)
		{
			if(*(ptr+i)%j==0)
				c++;
		}
		if(c==2)
			return i;
	}
	return -1;
}
