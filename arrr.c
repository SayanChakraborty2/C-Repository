#include<stdio.h>

int main()
{
  int array[100],length,i,j,n1,n;
  printf("Enter The Length of the array: ");
  scanf("%d",&length);
  printf("\nEnter The array\n");
  for(i=0;i<length;i++)
  {
   scanf("%d",&array[i]);
   }
  printf("\nEnter which smallest element you want\n");
  scanf("%d",&n);
  for(i=0;i<length;i++)
   {
    n1=0;
   for(j=0;j<length;j++)
    {
     if(array[i]>array[j])
      {
        n1++;
        }
      }
      if(n1==(n-1))
       {
        printf("\n%d is the %dth smallest element",array[i],n);
        }
       }
       
       return (0);
       }
