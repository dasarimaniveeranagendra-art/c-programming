#include<stdio.h>
int sumeven(int arr[],int n)
{
  if(n==0)
    return 0;
  int last=arr[n-1];
  if(last%2==0)
  {
    return last+sumeven(arr,n-1);
  }
  else{
    return sumeven(arr,n-1);
  }
}
int main()
{
  int arr[20],n,i;
  printf("enter size:");
  scanf("%d",&n);
  printf("eneter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int result=sumeven(arr,n);
  printf("sum of even ele:%d\n",result);
}
