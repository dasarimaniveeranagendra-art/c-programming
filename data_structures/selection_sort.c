#include<stdio.h>
int main()
{
  int arr[20]={7,4,10,8,3,1};
  int i,j;
  int temp;
  int mini;
  for(i=0;i<6-1;i++)
  {
    mini=i;
    for(j=i+1;j<6;j++)
    {
      if(arr[j]<arr[mini])
      {
        mini=j;
      }
    }
    if(mini!=i)
    {
      temp=arr[i];
      arr[i]=arr[mini];
      arr[mini]=temp;
    }
  }
  for(i=0;i<6;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}