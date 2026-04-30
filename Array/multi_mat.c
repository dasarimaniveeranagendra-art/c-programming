#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
int main()
{
  int i,j,k;
  int mat1[ROW1][COL1]={{2,1,4,3},{5,2,7,1},{3,1,4,2}};
  int mat2[ROW2][COL2]={{1,2},{3,4},{2,5},{6,2}};
  int mat3[ROW1][COL2];
  for(i=0;i<ROW1;i++)
  {
    for(j=0;j<COL2;j++)
    {
      mat3[i][j]=0;
      for(k=0;k<COL1;k++)
      {
        mat3[i][j]+=mat1[i][k]*mat2[k][j];
      }  
    }
  }
  printf("product of matrix is:\n");
  for(i=0;i<ROW1;i++)
  {
    for(j=0;j<COL2;j++)
    {
      printf("%2d ",mat3[i][j]);
    }
    printf("\n");
  }
}