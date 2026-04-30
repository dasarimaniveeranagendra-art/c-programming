#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10],str2[10];
  printf("enter a string:");
  scanf("%s",str2);
  strcpy(str1,str2);
  printf("first string :%s \t\t second string:%s\n",str1,str2);
  strcpy(str1,"hyderabad");
  strcpy(str2,"telangana");
  printf("first str:%s \t\t second str:%s\n",str1,str2);
}