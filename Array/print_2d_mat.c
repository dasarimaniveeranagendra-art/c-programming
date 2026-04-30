#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int arr[row][col];
  //int arr2[row][col];
  //int row,col;
  int i,j;
  printf("enter 1st matrix of (%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("matrix u entered is:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}