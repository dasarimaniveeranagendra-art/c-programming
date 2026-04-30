#include<stdio.h>
int main()
{
  int arr1[20],arr2[30];
  int i,n1,n2,j;
  printf("enter size of arr1:");
  scanf("%d",&n1);
  printf("enter the 1st arr elements:");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("enter size of arr2:");
  scanf("%d",&n2);
  printf("enter the 2nd arr elements:");
  for(i=0;i<n2;i++)
  {
    scanf("%d",&arr2[i]);
  }
  i=0,j=0;
  while(i<n1 && j<n2)
  {
    if(arr1[i]<arr2[j])
    {
      printf("%d",arr1[i++]);
    }
    else if(arr2[j]<arr1[i])
    {
      printf("%d",arr2[j++]);
    }
    else{
      printf("%d ",arr2[j++]);
      i++;
    }
  }
  printf("\n");
}