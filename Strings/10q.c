#include<stdio.h>
#include<string.h>
int main()
{
  char str[30]="programming";
  int i,max=0;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!='\0')
    {
      max++;
    }
  }
  printf("maximum no.of characters in a string:%d\n",max);
}