#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],ch;
  int freq[256]={0};
  int i;
  printf("enter the string:");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ' && str[i]!='\n')
    {
      freq[(unsigned char)str[i]]++;
    }
  }
  printf("repeated character:\n");
  for(i=0;i<256;i++)
  {
    if(freq[i]>1)
    {
      printf("%c appears %d times\n",i,freq[i]);
    }
  }
}