#include<stdio.h>
int binarysearch(int arr[],int n,int data);
int main()
{
  int i,j,n,data,result;
  printf("enetr size:");
  scanf("%d",&n);
  int arr[n];
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      } 
    } 
  }
  printf("sorted elements are:\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\nenter the element u want to search:\n");
  scanf("%d",&data);
  result=binarysearch(arr,n,data);
  if(result==-1)
  {
    printf("element not found\n");
  }
  else
  {
    printf("element found at index:%d ",result);
  }
  return 0;
}
int binarysearch(int arr[],int n,int data)
{
  int l=0,r=n-1,mid;
  int i;
  while(l<=r)
  {
    mid=(l+r)/2;
    if(data==arr[mid])
    {
      return mid;
    }
    else if(data<arr[mid])
    {
      r=mid-1;
    }
    else
    {
      l=mid+1;
    }
    //i++;
  }
  return -1;
}