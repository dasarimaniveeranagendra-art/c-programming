#include<stdio.h>
int main()
{
  int arr[]={2,2,1,1,2,2,2};
  int n=sizeof(arr[0]);
  int i,j,count,majority=-1;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[j]==arr[i])
      {
        count++;
      }
    }
    if(count>n/2)
    {
      majority=arr[i];
      break;
    }
  }
  if(majority!=-1)
  {
    printf("majority element is :%d\n",majority);
  }
  else{
    printf("no majority element\n");
  }
}