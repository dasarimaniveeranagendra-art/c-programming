#include<stdio.h>
int main()
{
  int arr[20]={1,2,4,5,6};
  int i,sum=0;
  for(i=0;i<=5;i++)
  {
    sum=sum+arr[i];
  }
  printf("%d\n",sum);
}