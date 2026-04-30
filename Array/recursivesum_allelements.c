#include<stdio.h>
int recsum(int arr[],int l,int r)
{
  if(l==r)
  {
    return arr[l]; 
  }
  int mid=(l+r)/2;
  int leftsum=recsum(arr,l,mid);
  int rightsum=recsum(arr,mid+1,r);
  return leftsum+rightsum;

}
int main()
{
  int arr[30];
  int i,n;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int result=recsum(arr,0,n-1);
  printf("sum of all elements are:%d\n",result);
}