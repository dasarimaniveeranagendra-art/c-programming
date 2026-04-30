#include<stdio.h>
#include<string.h>
int func(char str[])
{
  char *p=str;
  int len=0;
  while(*p!='\0')
  {
    len++;
    p++;
  }
  return len;
}
int main()
{
  char str[20]="linux";
  int len=func(str);
  printf("length of string:%d\n",len);
}