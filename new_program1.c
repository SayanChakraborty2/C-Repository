/*  NAME : ADITYA DEY
  ID : 201001001056
Write a program to find the greatest number among 3 given numbers using if-else statement.*/

#include<stdio.h>
int main()
{
   int num1,num2,num3;
   
   
   printf("\nEnter 3 numbers:\n");
   
   scanf("%d %d %d",&num1,&num2,&num3); 

   if((num1>num2)&&(num1>num3))
      printf("\n 1st number is big");
   else if((num2>num3)&&(num2>num1))
      printf("\n 2nd number is big"); 
   else
      printf("\n 3rd number is big");
   return 0;
}
