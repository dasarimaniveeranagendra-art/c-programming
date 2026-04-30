#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10],str2[20];
  printf("enter two strings:");
  gets(str1);
  gets(str2);
  int result=strcmp(str1,str2);
  if(result==0)
  {
    printf("strings are same\n");
  }
  else
  {
    printf("strings are no same\n");
  }
}