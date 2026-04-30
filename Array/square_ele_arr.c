#include<stdio.h>
int main()
{
  int n,i;
  printf("enter no.of elements:");
  scanf("%d",&n);
  int arr[n];
  printf("enter %d elements:\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("square of elements:\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]*arr[i]);
  }
  printf("\n");
}