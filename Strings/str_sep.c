/*#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]="hello";
  printf("individual character are:\n");
  for(int i=0;str[i]!='\0';i++)
  {
    printf("character %d:%c\n",i+1,str[i]);
  }
}*/
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50];
  char str2[50];
  char result[100];
  int i=0,j=0;
  printf("enter the 1st string:");
  scanf("%s",str1);
  printf("enter 2nd string:");
  scanf("%s",str2);
  for(i=0;str1[i]!='\0';i++)
  {
    result[i]=str1[i];
  }
  for(j=0;str2[j]!='\0';j++)
  {
    result[i]=str2[j];
    i++;
  }
  result[i]='\0';
  printf("combined string is:%s\n",result);
}