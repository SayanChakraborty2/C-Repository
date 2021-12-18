
 #include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void removeAll(char *, const char);
int main()
 {
  char str[MAX_SIZE];
  char ch;
  printf("\n Enter any string : ");
  gets(str);
  printf("\n Enter character to remove from string : ");
  ch = getchar();
  removeAll(str, ch);
  printf("\n The correct String after removing '%c': %s \n", ch, str);
  return 0;
  }
    void removeAll(char * str, const char ch)
  {
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
  {
    if(str[i] == ch)
  {
    for(j=i; j<len; j++)
  {
    str[j] = str[j+1];
  }
      len--;
    i--;
  }
  }
}