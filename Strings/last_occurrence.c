#include<stdio.h>
#include<string.h>
int main()
{
  char str[40],ch;
  int i,lastindex=-1;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  printf("enter a character:");
  scanf("%c",&ch);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==ch)
    {
      lastindex=i;
    }
  }
  if(lastindex!=-1)
  {
    printf("charcater '%c' found at index '%d'\n",ch,lastindex);
  }
  else{
    printf("charcater '%c' not found in index\n",ch);
  }
}