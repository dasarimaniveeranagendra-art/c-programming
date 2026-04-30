#include<stdio.h>
int main()
{
  char str1[20];
  char str2[20];
  int i;
  printf("enter 1st string:");
  gets(str1);
  printf("enter 2nd string:");
  gets(str2);
  if((strcmp(str1,str2))==0)
  {
    printf("strings are same\n");
  }
  else{
    printf("strings are not same\n");
  }
}