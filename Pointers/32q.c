#include<stdio.h>
#include<ctype.h>
int main()
{
  char str[100];
  char *ptr=str;
  int i;
  int vowel=0,conso=0;
  printf("enter string\n");
  fgets(str,sizeof(str),stdin);
  for(i=0;*(ptr+i)!='\0';i++)
  {
    char ch=tolower(*(ptr+i));
    if(ch>='a' && ch<='z')
    {
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' )
      {
        vowel++;
      }
    
      else{
        conso++;
      }
    }
  }
  printf("vowels:%d\n",vowel);
  printf("consonent:%d",conso);
  printf("\n");
}