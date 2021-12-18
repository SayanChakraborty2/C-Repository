#include <stdio.h>
#define max 30

void bubbleSort(float *a,int n);
int platform(float *a,float *d,int n);

int main()
{
    int i,n;
    printf("input the number of entries(shouldnt exceed 30) : ");
    scanf("%d",&n);
    float arr[max],dep[max];
    
	printf("input the arrival times : ");
    
    for(i=0;i<n;i++)
        {
			
		}	scanf("%f",&arr[i]);
    printf("input the departure times : ");
    
	for(i=0;i<n;i++)
        {
			scanf("%f",&dep[i]);
    	}
    	
	bubbleSort(arr,n);
    bubbleSort(dep,n);
    printf("the number of platform is : %d ",platform(arr,dep,n));
    return 0;
}

int platform(float *a,float *d,int n)
{
    int i,k=0,j=0,count=0,nop=0;

    for(i=0;i<n&&(k<n);i++)
    {
        if(d[j]>a[k])
        {
            count=count+1;
            k++;
        }
        else if(d[j]<=a[k])
        {
            
            count=count-1;
            j++;
        }
        else
        {
            j++;k++;
        }
        if(count>nop)
            nop+=1;
    }
    return nop;
}

void bubbleSort(float *a,int n)
{
    int i,j,k;
    float small,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
    }
}

    //float arr[]={ 2.00 2.10 3.00 3.20 3.50 5.00 };
    //float dep[]={ 2.30 3.40 3.20 4.30 4.00 5.20 };


