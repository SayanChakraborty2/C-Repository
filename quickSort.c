#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max 10000

void quicksort(int *,int ,int);
void swap(int *,int *);
int partition(int *,int,int);
int main()
{
    int i,n;
    printf("input the length ");
    scanf("%d",&n);
    int a[Max];
    srand(time(0));
    for(i=0;i<n;i++)
        a[i]=rand()%100;
    printf("Array before sorting \n ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    quicksort(a,0,n-1);
    printf("After sorting \n ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}

int partition(int *a,int start,int end)
{
    int pivot = a[end],temp;
    int i,j;
    i=start-1;
    for(j=start;j<end;j++)
    {
        if(a[j]<=pivot)
        {
           
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;            
        }
    }    
    temp=a[end];
    a[end]=a[i+1];
    a[i+1]=temp;
    return i+1;
}


void quicksort(int *a,int start,int end)
{
    int pos;
    
    if(start<end)
    {
        pos=partition(a,start,end);
        quicksort(a,start,pos-1);
        quicksort(a,pos+1,end);
    }
    
}


