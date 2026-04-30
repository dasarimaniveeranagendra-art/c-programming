#include<stdio.h>
int main()
{
  int arr[50]={1,2,3,4,5,6,7,8,9,10};
  int i,j,temp;
  for(i=0,j=10;i<j;i++,j--)
  {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  printf("after reversing of array:");
  for(i=1;i<=10;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}