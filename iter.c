#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int *ptr, int l);
void display(int *ptr, int l);
int interpolationsearch(int *ptr, int l, int n);
#define MAX 100
int main()
{
int arr[MAX],i,number,size,pos;
printf("Enter the terms of the array\n");
scanf("%d",&size);
srand(time(0));
for(i=0;i<size;i++)
{
arr[i]=rand()%100;
}
number=rand()%100;
sort(&arr[0],size);
display(&arr[0],size);
printf("\nEnter the number you want to search\n");
scanf("%d",&number);
pos= interpolationsearch(&arr[0], size, number);
if(pos!=-1)
printf("\nNUMBER FOUND at %d \n",pos);
else
printf("NUMBER NOT FOUND\n");
return 0;
}
void sort(int *ptr, int l)
{
int i,j,temp;
for(i=0;i<l-1;i++)
{
for(j=0;j<l-i-1;j++)
{
if((ptr+j)>(ptr+j+1))
{
temp=*(ptr+j);
(ptr+j)=(ptr+j+1);
*(ptr+j+1)=temp;
}
}
}
}
void display( int *ptr, int l)
{
int i;
printf("THE ELEMENTS IN THE ARRAY ARE: \n");
for(i=0;i<l;i++)
{
printf("%d ",*(ptr+i));
}
}
int interpolationsearch(int *ptr, int l, int n)
{
int p,low=0,high=l-1;
while((low<=high)&&(n>=(ptr+low))&&(n<=(ptr+high)))
{
p= low+(n-(ptr+low))(high-low) / (ptr+high)-(ptr+low);
if(*(ptr+p)==n)
return p;
if(*(ptr+p)<n)
low= p+1;
if(*(ptr+p)>n)
high= p-1;
}
return -1;
}
