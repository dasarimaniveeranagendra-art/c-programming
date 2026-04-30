#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20];
  char str2[20];
  printf("enter string:");
  scanf("%s",str2);
  strcpy(str1,str2);
  printf("original string:%s\n",str1);
  printf("copy of string:%s\n",str2);
}