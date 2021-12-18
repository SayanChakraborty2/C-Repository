#include<stdio.h>
#include<stdlib.h>

int smallest(int *a, int pos, int n)
{
	int small = a[pos],i;
	for(i=pos+1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos=i;
		}
	}
	return pos;
}

void selection_sort(int *a, int n)
{
	printf("\n SELECTION SORTING \n"); 
	int k,pos,temp;
	int count=0;
	for(k=0;k<n;k++)
	{
		pos=smallest(a,k,n);
		if(pos!=k)
		{
			count++;
			temp = a[k];
			a[k] = a[pos];
			a[pos] = temp;
		}
		
	}
	printf("\n\n After Selection Sort the sorting array: \n\n");
	for(k=0;k<n;k++)
	{
	  	printf("\t%d", a[k]);
	}
	printf("\n\n The Number of Swapping : %d",count);
}

void bubble_sort(int *a, int n)
{
	printf("\n BUBBLE SORTING \n"); 
	int i, j, temp,count=0;
	for(i=0;i<n;i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				count++;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n After Bubble Sort the sorting array: \n\n");
	for(i=0;i<n;i++)
	{
	  	printf("\t%d", a[i]);
	}
	printf("\n The Number of Swapping : %d",count);
}

void insertionsort(int *a,int n)
{
	printf("\n INSERTION SORTING \n");   
    int i,j,temp,count=0;
	for(i=1;i<n;i++) 
	{  
	    temp=*(a+i);
	    j=i-1;
        while(temp<a[j]&&(j>=0))
       	{
       		*(a+j+1)=*(a+j);
         	j--;
       		count++;
		}
	 	*(a+j+1)=temp;
    }
	printf("\n After Insertion Sort the sorting array: \n");
	for(i=0;i<n;i++)
	{
	  	printf("\t%d", a[i]);
	}
	printf("\n The Number of Swapping : %d",count);	
}

int main()
{
	int i,count;
	int arr[] = {749, 741, 441, 100, 911, 875, 123, 384, 120, 599, 801, 180, 942, 835, 760, 701, 592, 537, 304, 142, 
				125, 212, 612, 225, 58, 13, 733, 688, 357, 948, 988, 990, 602, 819, 239, 822, 355, 126, 867, 
				70, 244, 686, 406, 840, 650, 61, 263, 890, 697, 713, 672, 748, 848, 460, 628, 980, 738, 584, 826, 
				388, 512, 397, 281, 863, 269, 682, 959, 212, 669, 112, 449, 589, 972, 333, 486, 82, 638, 841, 50, 
				578, 615, 951, 242, 920, 335, 890, 934, 66, 545, 138, 275, 419, 520, 431, 437, 416, 174, 988, 687, 881};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("\n The Array is : \n");
	
	for(i=0;i<size;i++)
		{
			printf("\t%d",arr[i]);
		}
	int arr1[size],arr2[size];
		for(i=0;i<size;i++)
		{
			arr1[i]=arr[i];
		}
	for(i=0;i<size;i++)
		{
			arr2[i]=arr[i];
		}
		
	selection_sort(arr,size);
	bubble_sort(arr1,size);
	insertionsort(arr2,size);
	printf("\n");
	return 0;
}
