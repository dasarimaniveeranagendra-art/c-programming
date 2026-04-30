#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int i,j;
  printf("enter a string:");
  scanf("%s",str);
  int n=strlen(str);
  for(i=0;i<n/2;i++)
  {
    
    char temp=str[i];
    str[i]=str[n-i-1];
    str[n-i-1]=temp;   
  }
  printf("string reverse :\n");
  for(i=0;i<n;i++)
  {
    printf("str[%d]=%c\n",i,str[i]);
  }
}