#include<stdio.h>
#define row 3
#define col 4
int main()
{
  int arr[row][col];
  int i,j;
  printf("enter the matrix (%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("entered mayrix:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%2d ",arr[i][j]);
    }
    printf("\n");
  }
}