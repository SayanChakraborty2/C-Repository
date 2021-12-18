/*
#include<stdio.h>
float area(int r)
{
#define area(x) (3.14*(x)*(x))
return area(r);
}
int main()
{
int r ;
float a ;
printf("\n Enter Radius of the Circle : ");
scanf("%d", &r);
a = area(r);
printf("\n Area of the Circle : %f \n\n",a);
return 0;
}


#include<stdio.h>  
  
#define PI 3.14  
  
int main()  
{  
    float r, area;  
  
    printf("Enter Radius of Circle\n");  
    scanf("%f", &r);  
  
    area = PI * r * r;  
  
    printf("Area of Circle is %f\n", area);  
  
    return 0;  
}  */

#include<stdio.h>

#define AREA(x) 22.0/7.0*x*x
 int main()
  {
      float r,area;
      printf("Enter radius of circle : ");
      scanf("%f",&r);
      area=AREA(r);
      printf("\nArea of circle =%.2f\n",area);
      
    return 0;
  }