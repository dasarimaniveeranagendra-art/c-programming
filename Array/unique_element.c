#include<stdio.h>
int main()
{
  int arr[20];
  int i,j,n;
  int count;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("unique elements are:");
  for(i=0;i<n;i++)
  {
    count=0;
    for(j=0;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
    if(count==1)
    {
      printf("%d ",arr[i]);
    }
  }
  printf("\n");

}