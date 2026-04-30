#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,j;
  
  printf("enter a string:");
  scanf("%s",str);
  int n=strlen(str);
  printf("repetating characters in a string are: ");
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(str[i]==str[j] && str[i]!=' '&& str[i]!='\n')
      {
        printf("%c ",str[i]);
        break;
      }

    }
  }
  printf("\n");

}