#include<stdio.h>
void reversearray(int arr[],int n)
{
  int start=0,end=n-1,temp;
  while(start<end)
  {
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}
void printreverse(int arr[],int n)
{
  for(int i=0;i<=n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main()
{
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr[0]);
  printf("original array:");
  printreverse(arr,n);
  reversearray(arr,n);
  printf("reverse array:");
  printreverse(arr,n);
}