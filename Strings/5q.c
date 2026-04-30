#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]="this is vs code";
  
  int i=0,count;
  if(str[i]!='\0' && str[i]!=' ')
  {
    count=1;
  }
  while(str[i]!='\0')
  {
    if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
    {
      count++;
    }
    i++;
  }
  printf("no.of words in a string:%d\n",count);
}