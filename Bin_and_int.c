#include <stdio.h>
#include <stdlib.h>

int binary_search(int *, int, int);
int interpolation_search(int *, int, int);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
    17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
    49, 50, 501, 551, 650, 651, 10000000};
    int n=0,i,ch,key,pos;
    n= sizeof(a)/sizeof(int);

    printf("\nThe elements in the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    key=651;
    printf("\nThe key is %d",key);

    do
    {
        printf("\n\n 1. Binary Search\n 2. Interpolation Search\n 3. Exit \n");
        printf("PLEASE ENTER YOUR CHOICE:\n");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:pos = binary_search(&a[0], n, key);
        if(pos == -1)
        printf("%d is not present in array.\n", key);
        else
        printf("%d is present at position number %d.\n", key, pos);
        break;

        case 2:pos = interpolation_search(&a[0], n, key);
        if(pos == -1)
        printf("%d is not present in array.\n", key);
        else
        printf("%d is present at position number %d.\n", key, pos);
        break;

        case 3:
        break;
        default:
        printf("Wrong choice! please enter your choice again :\n");
        break;

        }
    }
    while(ch!=3);
    return 0;
}

int binary_search(int *a, int n, int key) {
   int k = 0, mid, count=0;

   while (k <= n) {
      mid = (k+n)/2;
      count=count+1;

      if (a[mid] == key) {
       printf("the number of iteration is %d.\n",count);
         return mid + 1;
         break;
      }
      else if (a[mid] < key)
         k= mid + 1;
      else
         n= mid - 1;
   }

   if (k>n)
      return -1;
}


int interpolation_search(int *a, int n, int key)
{
     int k = 0, mid, count=0;
    while (k <= n && *(a+k)<=key && *(a+n)>=key) {
        mid = k+(((n-k)/(a[n]-a[k]))*(key-a[k]));
       count=count+1;
        if (a[mid]==key){
            printf("the number of iteration is %d.\n",count);
            return mid + 1;
            break;
        }
        else if(a[mid]<key)
            k = mid + 1;
        else
            n = mid - 1;
    }
    return -1;
}