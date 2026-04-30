#include<stdio.h>
int main()
{
  int arr[20];
  int i,n,total,sum=0,missing;
  printf("enter size of array (n-1) since one num ismissing :");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  total=(n+1)*(n+2)/2;
  missing=total-sum;
  printf("the missing num is:%d\n",missing);
}