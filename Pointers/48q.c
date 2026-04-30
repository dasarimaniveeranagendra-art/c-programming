#include<stdio.h>
#include<stdlib.h>
int main()
{
  int **a,i,j,row,col;
  printf("enter no.of rows and col:");
  scanf("%d%d",&row,&col);
  a=(int **)malloc(row*sizeof(int *));
  for(i=0;i<row;i++)
  {
    a[i]=(int *)malloc(col*sizeof(int ));
  }
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("enter a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("the matrix is:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%5d",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<row;i++)
  {
    free(a[i]);
  }
  free(a);
}