#include<stdio.h>
#include<string.h>
int main()
{
  char str[20]="linux";
  int i ,n;
for(i=0;str[i]!='\0';i++)
  {
    if(strlen(str)!='\0')
    {
      printf("character %d=%c",i,str[i]);
    }
    printf("\n");
  }
}