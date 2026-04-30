#include<stdio.h>
int main()
{
  int arr1[20],arr2[20];
  int i,n;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<n;i++)
  {
    arr2[i]=arr1[i];
  }
  printf("copy of array\n");//copied array
  for(i=0;i<n;i++)
  {
    printf("%d\n",arr2[i]);
  }

}