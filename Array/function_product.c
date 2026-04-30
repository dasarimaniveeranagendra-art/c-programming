#include<stdio.h>
int productOfarray(int arr[],int n)
{
  int product=1;
  for(int i=0;i<n;i++)
  {
    product*=arr[i];
  }
  return product;
}
int main()
{
  int arr[]={2,3,4,5};
  int n=sizeof(arr[0]);
  int result=productOfarray(arr,n);
  printf("product of array elements:%d\n",result);
}