#include<stdio.h>
int main()
{
  int arr[5][5]={{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4}};
  int i,j;
  int m=5,n=5;
  int upper;
  int lower;
  int diagonal;
  printf("upper triangle:\n");
  if(m==n)
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        if(i<j)
        {
          printf("%d",arr[i][j]);
          upper+=arr[i][j];
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
    printf("lower triangle:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        if(i>=j)
        {
          printf("%d ",arr[i][j]);
          lower+=arr[i][j];
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
    printf("diagonals:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        if(i==j)
        {
          printf("%d ",arr[i][j]);
          diagonal+=arr[i][j];
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  else
  {
    printf("not square matrix:");
  }
  printf("upper:%d\nlower:%d\ndiagonal:%d\n",upper,lower,diagonal);
}