#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[20];
  int i,n;
  int vowel=0,consonent=0;
  printf("enter string:");
  scanf("%s",str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    char ch=tolower(str[i]);
    if(ch>='a'&& ch<='z')
    {
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      {
        vowel++;
      }
      else{
        consonent++;
      }
    }
  }
  printf("vowel=%d\nconsonent=%d\n",vowel,consonent);
}