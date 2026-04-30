#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int i,j;
  int mat1[row][col];
  int mat2[row][col];
  printf("enter the matrix (%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&mat1[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      mat2[i][j]=mat1[j][i];
    }
  }
  printf("transpose of matrix:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%d ",mat1[j][i]);
    }
    printf("\n");
  }
}