#include<stdio.h>
#include<string.h>
int main()
{
  char str[30],ch;
  int i;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  printf("enter a character to find:");
  scanf("%c",&ch);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==ch)
    {
      printf("first occurrence of %c occurs at index %d\n",ch,i);
      return 0;
    }
  }
  printf("charcater %c not found in index\n",ch);
}