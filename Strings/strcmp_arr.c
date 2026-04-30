#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10]="Jerry";
  char str2[10]="Ferry";
  mystrcmp(str1,str2);
  printf("%d\n",mystrcmp(str1,str2));
}
mystrcmp(char s1[],char s2[])
{
  int i=0;
  while(s1[i]==s2[i])
  {
    if(s1[i]=='\0')
    {
      return 0;
    }
    i++;
  }
  return s1[i]-s2[i];
}