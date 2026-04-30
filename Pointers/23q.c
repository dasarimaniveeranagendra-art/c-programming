#include<stdio.h>
#include<string.h>
int rev(char *str)
{
  char *start=str;
  char *end=str+strlen(str)-1;
  char *temp;
  while(start<end)
  {
    temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
  }
}
int main()
{
  char str[20];
  printf("enter string:");
  scanf("%s",str);
  rev(str);
  printf("reverse of string:%s\n",str);
}