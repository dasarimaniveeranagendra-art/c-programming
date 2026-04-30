#include<stdio.h>
int main()
{
  int A[20],B[20],diff[20];
  int n1,n2,i,j,k=0,found;
  printf("enter size of 1st array:");
  scanf("%d",&n1);
  printf("enter elements of 1st array:");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&A[i]);
  }
  printf("enter size of 2nd array: ");
  scanf("%d",&n2);
  printf("enter elemnets of 2nd array:");
  for(i=0;i<n2;i++)
  {
    scanf("%d",&B[i]);
  }
  for(i=0;i<n1;i++)
  {
    found=0;
    for(int j=0;j<n2;j++)
    {
      if(A[i]==B[j])
      {
        found=1;
        break;
      }
    }
    if(found==0)
    {
      diff[k++]=A[i];
    }
  }
  printf("difference (A-B):");
  for(i=0;i<k;i++)
  {
    printf("%d ",diff[i]);
  }
  printf("\n");
}