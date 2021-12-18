#include <stdio.h>
int main(int argc, char *argv[])

{
int i;
    printf("\n\n Total Number of Arguments : %d",argc);
    printf("\n\n File Name = %s", argv[0]);

        if(argc==1)
            printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
            
        if( argc >= 2 )
            {
                printf("\n\n The Arguments supplied are : \n\n");
                for(i=1; i<argc; i++)
                    {
                        printf(" %s \t",argv[i]);
                    }
                printf("\n\n");
            }
        else
            {
                printf("\n\n No Argument passed through Command Line. \n\n");
            }
    return 0;
}

