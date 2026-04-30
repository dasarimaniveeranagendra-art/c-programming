#include<stdio.h>
int main()
{
  int arr[30];
  int i,n,k;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter tne no.of position to be rotated:");
  scanf("%d",&k);
  k=k%n;
  int temp[50];
  int index=0;
  for(i=k;i<n;i++)
  {
    temp[index++]=arr[i];
  }
  for(i=0;i<k;i++)
  {
    temp[index++]=arr[i];
  }
  printf("after rotation:");
  for(i=0;i<n;i++)
  {
    printf("%d ",temp[i]);
  }
  printf("\n");
}