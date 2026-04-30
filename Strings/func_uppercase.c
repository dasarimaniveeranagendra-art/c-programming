#include<stdio.h>
#include<string.h>
#include<ctype.h>
void touppercase(char str[])
{
  int i=0;
  while(str[i]!='\0')
  {
    if(str[i]>='a' && str[i]<='z')
    {
      str[i]=str[i]-32;
    }
    i++;
  }
}
int main()
{
  char str[30];
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  touppercase(str);
  printf("uppercase:%s",str);
}