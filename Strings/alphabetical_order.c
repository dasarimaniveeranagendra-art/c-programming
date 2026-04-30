#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[]="Devanshi";
  int i,j;
  int n=strlen(str);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(tolower(str[j])>tolower(str[j+1]))
      {
        char temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
  }
  printf("after alphabetical order:%s\n",str);
}