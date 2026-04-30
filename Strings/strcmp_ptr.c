#include<stdio.h>
#include<string.h>
int main()
{
  char str1[]="Jerry";
  char str2[]="Jerry";//"Ferry";
  mystrcmp(str1,str2);
  printf("%d\n",strcmp(str1,str2));
}
mystrcmp(char *s1,char *s2)
{
  while(*s1==*s2)
  {
    if(*s1=='\0')
    {
      return 0;
    }
    s1++;
    s2++;
  }
  return *s1-*s2;
}