#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,j=0;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
      str[j++]=str[i];
    }
  }
  str[j]='\0';
  printf("after removing space:%s",str);
}