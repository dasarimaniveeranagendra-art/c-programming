#include<stdio.h>
#define row 3
#define col 3
int main()
{
  int arr[row][col]={{1,2,3},{4,5,6},{7,8,9}};
  int (*ptr)[col];
  ptr=arr;
  printf("2d array elements using pointer subscript:\n");
  for(int i=0;i<col;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("%d ",ptr[i][j]);
    }
    printf("\n");
  }

}