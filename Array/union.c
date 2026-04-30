#include<stdio.h>
int main()
{
  int arr1[]={1,2,3,4};
  int arr2[]={3,4,5,6};
  int result[20];
  int i,j,n1=4,n2=4,k=0;
  int found;
  for(i=0;i<n1;i++)
  {
    result[k]=arr1[i];
    k++;
  }
  for(i=0;i<n2;i++)
  {
    found=0;
    for(j=0;j<k;j++)
    {
      if(arr2[i]==result[j])
      {
        found=1;
        break;
      }
    }
    if(found==0)
    {
      result[k]=arr2[i];
      k++;
    }
  }
  printf("union of arrays:\n");
  for(i=0;i<k;i++)
  {
    printf("%d ",result[i]);
  }
  printf("\n");
}