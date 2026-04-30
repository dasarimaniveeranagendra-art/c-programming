#include<stdio.h>
#include<string.h>
#include<ctype.h>
void tolowercase(char str[])
{
  int i=0;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A' && str[i]<='Z')
    {
      str[i]=str[i]+32;
    }
  }
}
int main()
{
  char str[30];
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  tolowercase(str);
  printf("lowercase:%s",str);
}