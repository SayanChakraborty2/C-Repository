#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE * fPtr;
    char filename[100], ch;

    fPtr = fopen(filename, "r");
    printf("Enter the filename to open for reading \n");
	scanf("%s", filename);
    

    if(fPtr == NULL)
    {
      
        printf("Unable to open file! \n");
        printf("Please check whether file exists.\n");
        exit(0);
    }

    printf("File opened successfully. Reading file contents character by character. \n");

    do 
    {
        
        ch = fgetc(fPtr);

         putchar(ch);

    } while(ch != EOF); 

    fclose(fPtr);
 return 0;
}