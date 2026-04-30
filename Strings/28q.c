#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[20];
  int islower=1;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++)
  {
    if(isalpha(str[i]) && !islower(str[i]))
    {
      islower=0;
      break;
    }
  }
  if(islower)
  {
    printf("it is lowercase string\n");
  }
  else
  {
    printf("it is not a lowercase letter\n");
  }
}
