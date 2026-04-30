#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[20];
  int i,isupper=1;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    if(isalpha(str[i]) && !isupper(str[i]))
    {
      isupper=0;
      break; 
    }
  }
  if(isupper)
  {
    printf("entered string is uppercase\n ");
  }
  else{
      printf("not a uppercase\n");
  }
  
}