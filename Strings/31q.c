#include<stdio.h>
#include<string.h>
int main(){
  char str[20];
  int i,j;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
      str[j--]=str[j];
    }
  }
  str[j]='\0';
  printf("after creating a space between two words:%s",str);
}