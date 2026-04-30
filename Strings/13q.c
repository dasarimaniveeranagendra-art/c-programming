#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,j,k,n;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      printf("{");
      for(k=i;k<j;k++)
      {
        printf("%c",str[k]);
      }
      printf("}\n");
    }
  }
}