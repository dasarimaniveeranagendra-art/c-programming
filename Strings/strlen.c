#include<stdio.h>
#include<string.h>
int main()
{
  int len;
  char str[10]="Linux";
  len=strlen(str);
  strlen(str);
  astrlen(str);
  printf("string length is:%ld\n",strlen(str));
}
astrlen(char arr[])
{
  int i=0;
  while(arr[i]!='\0')
  {
    i++;
  }
  return i;
}