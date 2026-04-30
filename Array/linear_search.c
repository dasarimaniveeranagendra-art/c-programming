#include<stdio.h>
int main()
{
  int arr[100];
  int i,n,data;
  int found=0;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter elements u want to search:");
  scanf("%d",&data);
  for(i=0;i<n;i++)
  {
    if(arr[i]==data)
    {
      printf("element found at index:%d\n",i);
      found=1;
      break;
    }
  }
  if(found==0)
  {
    printf("element not found\n");
  }
}