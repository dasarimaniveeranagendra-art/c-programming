#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[30];
  int i;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    //str[i]=toupper(str[i]);
    str[i]=tolower(str[i]);
  }
  //printf("uppercase :%s\n",str);
  printf("lowercase:%s\n",str);
}