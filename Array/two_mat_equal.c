#include<stdio.h>
int main()
{
  int row,col;
  printf("enter rows and col: ");
  scanf("%d%d",&row,&col);
  int a[row][col],b[row][col];
  int i,j,equal=1;
  printf("enter 1st matrix(%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter 2nd matrix(%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      if(a[i][j]!=b[i][j])
      {
        equal=0;
        break;
      }
    }
    if(equal==0) break;
  }
  if(equal)
  {
    printf("\nthe matrix are equal.\n");
  }
  else
  {
    printf("\nthe matrix are not equal.\n");
  }
}