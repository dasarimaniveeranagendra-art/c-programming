#include<stdio.h>
int main()
{
  int arr1[30];
  int arr2[30];
  int i,j,n;
  int merged[50];
  printf("enter size of arr1:");
  scanf("%d",&n);
  printf("enter elements of 1st arr:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("enter size of arr2:");
  scanf("%d",&n);
  printf("enter elements of 2nd arr:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<n;i++)
  {
    merged[i]=arr1[i];
  }
   for(i=0;i<n;i++)
  {
    merged[n+i]=arr2[i];
  }
  for(i=0;i<2*n-1;i++)
  {
    for(j=i+1;j<2*n;j++)
    {
      if(merged[i]<merged[j])
      {
        int temp=merged[i];
        merged[i]=merged[j];
        merged[j]=temp;
      }
    }
  }
  printf("merged array in descending order:");
  for(i=0;i<2*n;i++)
  {
    printf("%d ",merged[i]);
  }
  printf("\n");
}