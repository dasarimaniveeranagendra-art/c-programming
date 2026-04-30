#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int arr1[row][col];
  int arr2[row][col];
  int i,j;
  int result[row][col];
  printf("enter matrix (%dx%d):\n",row,col);
  printf("enter 1st matrix:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d", (arr1[0] + i * col + j));
    }
  }
  printf("enter 2nd matrix\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d", (arr2[0] + i * col + j));
    }
  }
   for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      *(*(result+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
    }
  }
  printf("result matrix(arr1+arr2):\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%2d ",*(*(result+i)+j));
    }
    printf("\n");
  }

}