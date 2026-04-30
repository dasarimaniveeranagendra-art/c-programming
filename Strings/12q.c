#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int i,n;
  printf("enter a string:");
  gets(str);
  n=strlen(str);
  for(i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(str[j]>str[j+1])
      {
        int temp;
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
  }
  printf("string using bubbe sort:%s",str);
  printf("\n");
}