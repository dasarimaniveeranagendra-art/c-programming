#include<stdio.h>
int main()
{
  //int arr[100];
  int n,i,j;
  int m;
  printf("enter range from (1-n):");
  scanf("%d",&n);
  //printf("enter elements:");
  int arr[n-1];
  printf("enter %d number (from 1 to %d,with missing:)\n",n-1,n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=1;i<=n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(arr[j]==i)
      {
        break;
      }
    }
    if(j==n-1)
    {
      printf("missing number is:%d",i);
      break;
    }
  }
  printf("\n");
}