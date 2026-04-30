#include<stdio.h>
int main()
{
  int arr[30];
  int i,j,n;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]<arr[j+1])
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
  //printf("second largest element is:%d\n",arr[1]);
  //printf("second smallest element is:%d\n",arr[n-1]);
  printf("\n");
}