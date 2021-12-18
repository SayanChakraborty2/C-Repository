#include<stdio.h>
#include<stdlib.h>//for rand.srand etc
#include<time.h>
#define Max 10000

void mergeSort(int *a,int p,int r);
void merge(int *a,int p,int q,int r);
int main()
{
    int a[Max],n,key,loc,i;
    
    printf("input the number of elements of the array : ");
    scanf("%d",&n);
    srand(time(0));
    for(i=0;i<n;i++)
        a[i]=rand()%100;
    printf("The array before sorting is : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("The array after sorting is : ");
    mergeSort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

void merge(int *a,int p,int q,int r)
{
    int n1=q-p+1,n2=r-q,i,j,k;int L[n1+1],R[n2+1];
    for(i=0;i<n1;i++)
        L[i]=a[p+i];
    for(i=0;i<n1;i++)
        R[i]=a[q+i+1] ;
    i=0;j=0;L[n1]=1000;R[n2]=1000;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i+=1;
        }    
        else
        {
            a[k]=R[j];
            j+=1;
        }    
    }   
}

void mergeSort(int *a,int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}