#include<stdio.h>
int  main()
{
  int arr[40];
  int i,j,n;
  printf("enter the size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("non-repeated elements:");
  for(i=0;i<n;i++)
  {
    int count=0;
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
