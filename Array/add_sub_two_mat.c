#include<stdio.h>
int main()
{
  int i,j;
  int arr1[3][3]={{4,2,3},{5,1,7},{4,7,1}};
  int arr2[3][3]={{3,2,4},{1,4,2},{7,0,5}};
  int arr3[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      //arr3[i][j]=arr1[i][j]+arr2[i][j];
      arr3[i][j]=arr1[i][j]-arr2[i][j];
    }
  }
  printf("addition of matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%2d ",arr3[i][j]);
    }
    printf("\n");
  }
}