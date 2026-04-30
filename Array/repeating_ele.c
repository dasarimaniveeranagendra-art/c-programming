#include<stdio.h>
int main()
{
  int arr[]={2,4,5,6,4,3,2};
  int i,j;
  int n=7;
  printf("repeadted elements of array:");
  for(i=0;i<7;i++)
  {
    for(j=i+1;j<7;j++)
    {
      if(arr[i]==arr[j])
      {
        printf("%d ",arr[i]);
      }
    }
  }
  printf("\n");
}