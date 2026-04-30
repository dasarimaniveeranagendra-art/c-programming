#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int arr[row][col];
  int i,j;
  int top=0,bottom=row-1,right=col-1,left=0;
  printf("enter matrix (%dx%d):\n",row,col);
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("snake pattern:");
  while(top<=bottom && left<=right)
  {
    for(i=left;i<=right;i++)
    {
      printf("%d->",arr[top][i]);
    }
    top++;
    for(i=top;i<=bottom;i++)
    {
      printf("%d->",arr[i][right]);
    }
    right--;
    if(top<=bottom)
    {
      for(i=right;i>=left;i--)
      {
        printf("%d->",arr[bottom][i]);
      }
      bottom--;
      if(left<=right)
      {
        for(i=bottom;i>=top;i--)
        {
          printf("%d->",arr[i][left]);
        }
      }
      left++;
    }
  }
  printf("\n");
}