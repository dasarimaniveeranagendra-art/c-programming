#include<stdio.h>
int main()
{
  int arr1[100];
  int arr2[100];
  int i,j,n;
  printf("enter 1st array size:");
  scanf("%d",&n);
  printf("enter 1st elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("enetr 2nd array size:");
  scanf("%d",&n);
  printf("enter 2nd elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
  int unioar[100];
  int k=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr1[i]==arr2[j])
      {
        unioar[k]=arr1[i];
        k++;
      }
    }
  }
  printf("the intersection elements are:");
  for(i=0;i<k;i++)
  {
    printf("%d ",unioar[i]);
  }
  printf("\n");  
}