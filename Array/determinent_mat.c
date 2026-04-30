#include<stdio.h>
#define n 3
int main()
{
  int arr[n][n];
  int i,j;
  int det;
  printf("enter the matrix (%dx%d):\n",n,n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  det=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
  printf("determinent of matrix=%d\n",det);
}