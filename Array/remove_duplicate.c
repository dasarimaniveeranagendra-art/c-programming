#include<stdio.h>
int main()
{
  int arr[100];
  int n,i,j,k;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        for(k=j;k<n-1;k++)
        {
          arr[k]=arr[k+1];
        }
        n--;
      }
      else{
        j++;
      }
    }
  }
  printf("after removing duplicate elements:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}