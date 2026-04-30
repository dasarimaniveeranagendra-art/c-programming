/*#include<stdio.h>
int main()
{
  int arr[5][5]={{0,1,2,3,4},
                  {0,1,2,3,4},
                  {0,1,2,3,4},
                  {0,1,2,3,4},
                  {0,1,2,3,4}};
  int i,j;
  int m=5,n=5;
  if(m==n)
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        if(i<j)
        {
          printf("upper triangle:%d\n",arr[i][j]);
        }
        else if(i>j)
        {
          printf("lower triangle:%d\n",arr[i][j]);
        }
        else
        {
          printf("diagonals:%d\n",arr[i][j]);
        }
      }
    }
  }
  else
  {
    printf("not square\n");
  }
}*/
#include<stdio.h>
int main()
{
  int arr[5][5]={{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4},{0,1,2,3,4}};
  int i,j;
  int m=5,n=5;
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
  printf("\n");
}