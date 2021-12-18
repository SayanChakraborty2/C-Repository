#include <stdio.h>
struct complex_number
{
    float real, imaginary;
};

typedef struct complex_number complex;

void displayComplex(complex *c);
void addComplex(complex *c1,complex *c2,complex *c3);
void subtractComplex(complex *c1,complex *c2,complex *c3);
void multiplyComplex(complex *c1,complex *c2,complex *c3);
void inputComplex(complex *c);

int main() 			//menu
{
    complex c1,c2,c3;
    int choice;
    do{
        printf(" 1.To display the complex number\n 2.To add complex numbers\n 3.To subtract complex numbers\n 4.To multiply complex numbers\n 5.to the exit the menu \nEnter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("input the complex number to be dislayed ");
                    inputComplex(&c1);
                    displayComplex(&c1);
            break;
            case 2: printf("input the complex numbers to be added ");
                    inputComplex(&c1);
                    inputComplex(&c2);
                    addComplex(&c1,&c2,&c3);
                    printf("the sum of the given complex number is ");
                    displayComplex(&c3);
                    
            break;
            case 3: printf("input the complex numbers to be subtracted ");
                    inputComplex(&c1);
                    inputComplex(&c2);
                    subtractComplex(&c1,&c2,&c3);
                    printf("the difference of the given complex number is ");
                    displayComplex(&c3);
                    
            break;
            case 4: printf("input the complex numbers to be multiplied ");
                    inputComplex(&c1);
                    inputComplex(&c2);
                    multiplyComplex(&c1,&c2,&c3);
                    printf("the product of the given complex number is ");
                    displayComplex(&c3);
                    
            break;
            case 5: break;
            default: printf("\n invalid input !");
        }
        printf("\n enter 0 to return to program \n\n");
        scanf("%d",&choice);
    }while(choice!=5);
    return 0;
}



void inputComplex(complex *c)	//input
{
    scanf("%f %f",&(c->real),&(c->imaginary));
    
}



void displayComplex(complex *c)		//display
{
    if(c->imaginary<0)
        printf("%.2f-i%.2f\n",c->real,0-c->imaginary);
    else 
        printf("%.2f+i%.2f\n",c->real,c->imaginary);
}




void addComplex(complex *c1,complex *c2,complex *c3)	//add
{
   c3->real=c1->real+c2->real;
   c3->imaginary=c1->imaginary+c2->imaginary;
    
}



void subtractComplex(complex *c1,complex *c2,complex *c3)	//substract
{
   c3->real=c1->real-c2->real;
   c3->imaginary=c1->imaginary-c2->imaginary;
    
}



void multiplyComplex(complex *c1,complex *c2,complex *c3)	//multiply
{
    c3->real=(c1->real)*(c2->real)-(c1->imaginary)*(c2->imaginary);
    c3->imaginary=(c1->real)*(c2->imaginary)+(c2->real)*(c1->imaginary);
}


