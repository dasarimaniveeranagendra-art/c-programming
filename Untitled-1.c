#include<stdio.h>
int main()
{
  int arr1[20];
  int arr2[20];
  int result[40];
  int i,n,j,n1,n2,k=0;
  int flag;
  printf("size of 1st array:");
  scanf("%d",&n1);
  printf("enter 1st array values:");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("size of 2nd array:");
  scanf("%d",&n2);
  printf("enter 2nd array values:");
  for(i=0;i<n2;i++)
  {
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<n1;i++)
  {
    result[k++]=arr1[i];
  }
  for(i=0;i<n2;i++)
  {
    flag=0;
    for(j=0;j<k;j++)
    {
      if(arr2[i]==result[j])
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      result[k++]=arr2[i];
    }
  }
  printf("union of array:");
  for(i=0;i<k;i++)
  {
    printf("%d",result[i]);
  }
  printf("\n");
}