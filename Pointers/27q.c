#include<stdio.h>
int func(int *arr,int n)
{
  int *start=arr;
  int *end=arr+n-1;
  while(start<end)
  {
    int temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
  }
  
}
int main()
{
  int n,i;
  printf("enter size:");
  scanf("%d",&n);
  int arr[20];
  printf("enter data:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]); 
  }
  func(arr,n);
  printf("reverse array:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
