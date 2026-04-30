#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20];
  char str2[20];
  printf("enter 1st string:");
  scanf("%s",str1);
  printf("enter 2nd string:");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("new string:%s\n",str1,str2);
}