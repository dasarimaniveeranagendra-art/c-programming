#include<stdio.h>
int main()
{
  int arr[]={1,1,2,3,4,5,5};
  int i,j,count=0;
  int n=sizeof(arr[0]);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j]);
      {
        count++;
        break;
      }
    }
  }
  printf("no.of duplicate elements are:%d\n",count);
}