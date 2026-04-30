#include<stdio.h>
int main()
{
  int arr[20]={3,5,6,2,1,4};
  int i,j,temp;
  printf("insertion sort:");
  for(i=1;i<6;i++)
  {
    temp=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
  for(i=0;i<6;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}