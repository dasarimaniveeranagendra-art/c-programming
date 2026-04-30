#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[200];
  int i,count=0;
  int ispunct;
 
  printf("entar a string:");
  fgets(str,sizeof(str),stdin);
  for(i=0;i<strlen(str);i++)
  {
    if(ispunct(str[i]))
    {
      count++;
    }
  }
  printf("total punctuation charcaters in a string are :%d\n",count);
}