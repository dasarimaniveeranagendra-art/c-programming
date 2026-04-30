#include<stdio.h>
#define row 3
#define col 4
int main()
{
  int arr1[row][col],arr2[row][col];
  int *pa[row][col];
  int i,j,n;
  int k;
  printf("enter matrix (%dx%d):\n",row,col);
  printf("enter 1st matrix:\n");
  scanf("%d",&n);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",pa[i][j]);
    }
  }
  printf("enter the 2nd matrix:\n");
  scanf("%d",pa[i][j]);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",pa[i][j]);
    }
  }

}