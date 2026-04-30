#include<stdio.h>
#define n 3
int main()
{
  int arr[n][n];
  int i,j,*ptr;
  ptr=&arr[0][0];
  printf("enter 2d array (%dx%d):\n",n,n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\nvalues and address of 2d array elements:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("arr[%d][%d]=%d\taddress=%p\n",i,j,arr[i][j],(void*)&arr[i][j]);
    }
  }
  
}