#include<stdio.h>
int main()
{
  int mat[10][10];
  int row,col,i,j,sum;
  printf("enter no.of rows:");
  scanf("%d",&row);
  printf("enter no.of col:");
  scanf("%d",&col);
  printf("enter elements of %dx%d mat:\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&mat[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    sum=0;
    for(j=0;j<col;j++)
    {
      sum+=mat[i][j];
    }
    if(sum!=0)
    {
      printf("sum  of row %d=%d\n",i+1,sum);
    }
    else{
      printf("row %d sum is zero\n",i+1);
    }
  }
  for(j=0;j<col;j++)
  {
    sum=0;
    for(i=0;i<row;i++)
    {
      sum+=mat[i][j];
    }
    if(sum!=0)
    {
      printf("sum of col %d=%d\n",j+1,sum);
    }
    else{
      printf("col %d sum is zero\n",j+1);
    }
  }
}