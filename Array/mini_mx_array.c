#include<stdio.h>
int main()
{
  int arr[50];
  //int max=0;
  int mini;
  int i,n;
  printf("enter size of array:");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    //if(arr[i]>max)
    //{
      //max=arr[i];
    //}
    if(arr[i]<mini)
    {
      mini=arr[i];
    }
  }
  //printf("max=%d\n",max);
  printf("mini=%d\n",mini);
}