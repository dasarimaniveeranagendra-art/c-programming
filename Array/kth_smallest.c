#include<stdio.h>
int main()
{
  int arr[30];
  int i,j,n,k;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter data:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter k:");
  scanf("%d",&k);
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
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  if(k>0 && k<=n)
  {
    printf("\n%d smallest num is:%d\n",k,arr[k-1]);
  }
  else{
    printf("invalid num\n");
  }
}