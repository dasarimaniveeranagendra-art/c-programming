#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int a[row][col];
  int i,j;
  int symmetric=1;
  printf("enter the matrix (%dx%x):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      if(a[i][j]!=a[j][i])
      {
        symmetric=0;
        break;
      }
    }
  }
  if(symmetric)
  {
    printf("matrix is symmetric\n");
  }
  else{
    printf("not symmetric\n");
  }
}