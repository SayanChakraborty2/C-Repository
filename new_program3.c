/* NAME: ADITYA DEY
  ID: 201001001056
Write a program to determine whether a character is vowel or not using switch case.*/

#include <stdio.h>

int main(){
    char entChar;

    printf("Enter the character to be checked:\n ");
    scanf("%c",&entChar);

    switch(entChar){
        case 'a':
        printf("%c is a vowel.",entChar);
        break;
        case 'e':
        printf("%c is a vowel.",entChar);
        break;
        case 'i':
        printf("%c is a vowel.",entChar);
        break;
        case 'o':
        printf("%c is a vowel.",entChar);
        break;
        case 'u':
        printf("%c is a vowel.",entChar);
        break;
        default:
        printf("%c is not a vowel, it is a consonant.",entChar);
        break;
    }
    return 0;
}