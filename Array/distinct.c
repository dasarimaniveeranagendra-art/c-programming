#include<stdio.h>
int main()
{
  int arr[30];
  int i,j,n;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-2;i++)
  {
    for(j=i+1;j<n-1;j++)
    {
      if(arr[i]==arr[j])
      {
        printf("entered elements are not distinct\n");
        return 0;
      }
    }
  }
  printf("elements are distinct\n");
}