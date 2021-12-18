//INTERPOLATION SEARCH: 
 
#include<stdio.h> 
#include<stdlib.h>
 int interpolationsearch(int *ptr,int l, int n); 
 
#define MAX 100 
int main() 
{ 
int arr[MAX],i,number,size,pos; printf("Enter the number of terms of the array\n"); scanf("%d",&size); printf("Enter the elements in the array\n"); for(i=0;i<size;i++) 
{ 
scanf("%d",&arr[i]); 
} 
printf("Enter the number you want to search\n"); scanf("%d",&number); pos= interpolationsearch(arr, size, number); if(pos!=-1) printf("Element found at position %d",pos); else printf("Element not found"); 
return 0; 
} 
int interpolationsearch(int *ptr, int l, int n) 
{ 
int p,low=0,high=l-1; while((low<=high)&&(n>=*(ptr+low))&&(n<=*(ptr+high))) 
{ 
p = low+((n-*(ptr+low))(high-low)/(*(ptr+high)-*(ptr+low))); if(*(ptr+p)==n) return p; else if(*(ptr+p)<n) low= p+1; else if(*(ptr+p)>n) high= p-1; 
} 
return -1; 
} 
