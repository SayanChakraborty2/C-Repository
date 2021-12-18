

 
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int *ptr,i;
    int p1,p2,p3,p4,p5;
    
    printf("enter the values \n");
    scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);
     
    ptr=(int*)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("Error in allocating memory!!!");
        return -1;
    }
    *(ptr+0)=p1; *(ptr+1)=p2; *(ptr+2)=p3; *(ptr+3)=p4;
    *(ptr+4)=p5;
     
    printf("Array elements are:\n");
     
    for(i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
     
    return 0;   
}