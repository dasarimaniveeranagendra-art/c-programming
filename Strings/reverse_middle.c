#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int len,mid;
  printf("enetr a string:");
  scanf("%s",str);
  len=strlen(str);
  mid=len/2;
  for(int i=mid,j=len-1;i<j;i++,j--)
  {
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
  printf("after reversing string from middele:%s\n",str);
}