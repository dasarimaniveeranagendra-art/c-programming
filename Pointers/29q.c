#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  char *ptr=str;
  int length=0;
  printf("enter the string:");
  gets(str);
  while(*ptr!='\0')
  {
    length++;
    ptr++;
  }
  printf("length of string:%d\n",length);

}