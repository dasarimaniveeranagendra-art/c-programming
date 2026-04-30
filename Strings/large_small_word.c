#include<stdio.h>
#include<string.h>
int main()
{
  char str[40];
  printf("enter the string:");
  scanf("%s",str);
  if(strlen(str)<3)
  {
    printf("the word is smaller\n");
  }
  else{
    printf("the word is larger\n");
  }
}
/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char str[40];
  int i=0;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  while(str[i]!='\0')
  {
    str[i]=tolower(str[i]);
    i++;
  }
  printf("lowercase string is:%s\n",str);
}*/