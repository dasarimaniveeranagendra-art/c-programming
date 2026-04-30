#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[20];
  int i;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      {
        str[i]=toupper(str[i]);
      }
  }
  printf("vowels into uppercase:%s\n",str);
}