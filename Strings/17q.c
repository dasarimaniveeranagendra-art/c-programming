#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  char str[20],result[30];
  int i,j=0;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    if(isalpha(str[i]))
    {
      result[j++]=str[i];
    }
  }
  result[j]='\0';
  printf("string only with characters are:%s\n",result);
}