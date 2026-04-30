#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[30];
  int i;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]>='0' && str[i]<='9')
    {
    printf(" %c is a digit\n",str[i]);
    }
    else
    {
      printf(" %c is not a digit\n",str[i]);
    }
  }
}