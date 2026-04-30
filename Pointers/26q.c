#include<stdio.h>
int strcompare(const char *s1,const char *s2)
{
  while(*s1!='\0' && *s2!='\0')
  {
    if(*s1!=*s2)
    {
      return (*s1-*s2);
    }
    s1++;
    s2++;
  }
  return (*s1-*s2);
}
int main()
{
  char str1[100],str2[100];
  printf("enter 1st string:");
  fgets(str1,sizeof(str1),stdin);
  printf("enter 2nd string:");
  fgets(str2,sizeof(str2),stdin);
  char *p=str1;
  while(*p)
  {
    if(*p=='\n')
    {
      *p='\0';
    }
    p++;
    p=str2;
    while(*p)
    {
      if(*p=='\n')
      {
        *p='\0';
      }
      p++;
    }
    int result=strcompare(str1,str2);
    if(result==0)
    {
      printf("string are equal\n");
    }
    else if(result<0)
    {
      printf("1st string smaller (lexicographically).\n");
    }
    else
    {
      printf("1st string greater (lexicographically)\n");
    }
  }
}