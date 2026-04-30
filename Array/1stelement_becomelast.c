#include<stdio.h>
int main()
{
  int arr[30]={1,2,3,4,5,6};
  int n=6,i,temp;
  printf("original array:");
  for(i=0;i<6;i++)
  {
    printf("%d ",arr[i]);
  }
  temp=arr[0];
  for(i=0;i<n-1;i++)
  {
    arr[i]=arr[i+1];
  }
  arr[n-1]=temp;
  printf("\nafter reversing:");
  for(i=0;i<6;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}