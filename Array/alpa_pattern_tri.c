#include<stdio.h>
int main()
{
  char arr[20];
  int n,i,j;
  printf("enetr size:");
  scanf("%d",&n);
  printf("enter characters:");
  for(i=0;i<n;i++)
  {
    scanf(" %c",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      printf("%c ",arr[j]);
    }
    printf("\n");
  }
  for(i=0;i<n;i++)
  {
    printf("%c ",arr[i]);
  }
  printf("\n");
}