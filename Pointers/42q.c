#include<stdio.h>
#include<string.h>
int main()
{
  char *str1;
  char *str2;
  printf("enter 1st string:");
  gets(str1);
  printf("enter 2nd string:");
  gets(str2);
  strcat(str1,str2);
  printf("new string:%s\n",str1);
}