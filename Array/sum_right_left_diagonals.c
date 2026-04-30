#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int arr[row][col];
  int leftdiagonal=0,rightdiagonal=0;
  int i,j;
  printf("enter 1st matrix of (%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    leftdiagonal+=arr[i][i];
    rightdiagonal+=arr[i][row-i-1];
  }
  printf("leftdiagonal=%d\nrightdiagonal=%d\n",leftdiagonal,rightdiagonal);
}