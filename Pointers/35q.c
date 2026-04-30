#include<stdio.h>
int main()
{
  int arr[20];
  int *ptr=arr;
  int i,n;
  int sum;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    sum+=*(ptr+i);
  }
  printf("%d\n",sum);
}