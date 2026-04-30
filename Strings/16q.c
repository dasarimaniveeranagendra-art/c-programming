#include<stdio.h>
#include<string.h>
//#include<ctype.h>
int main()
{
  char str[200];
  int count=0;
  char *token;
  printf("enter the string:");
  fgets(str,sizeof(str),stdin);
  token=strtok(str," \n");
  while(token!=NULL)
  {
    if(strcmp(token,"that")==0)
    {
      count++;
    }
    token=strtok(NULL," \n");
  }
  printf("the word 'that' appears %d time in a string.\n",count);
  
}