#include<stdio.h>
int main()
{
  int n,i,j;
  printf("how many row u want to print:");
  scanf("%d",&n);
/*
//hollow square pattern.
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1||j==1||i==n||j==n)
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }*/

  //upper half hollow pyramid.
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*n-1;j++)
    {
      if(j==n-(i-1)||j==n+(i-1))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  //lower half hollow pyramid
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=2*n-1;j++)
    {
      if(j==n-(i-1)||j==n+(i-1))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}