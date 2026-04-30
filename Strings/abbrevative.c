#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[]="World Health Organization";
  int i;
  if(isalpha(str[0]))
  {
    printf("%c",str[0]);
  }
  for(i=1;str[i]!='\0';i++)
  {
    if(str[i-1]==' ' && isalpha(str[i]))
    {
      printf("%c",str[i]);
    }
  }
  printf("\n");
}