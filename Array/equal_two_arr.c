#include<stdio.h>
int main()
{
  int arr1[10];
  int arr2[10];
  int n1,n2,i,flag=1;
  printf("enter size of 1st arr:");
  scanf("%d",&n1);
  printf("elements:");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("enter size of 2nd arr:");
  scanf("%d",&n2);
  printf("elements:");
  for(i=0;i<n2;i++)
  {
    scanf("%d",&arr2[i]);
  }
  if(n1!=n2)
  {
    printf("arrays are not equal\n");
  }
  else{
    for(i=0;i<n1;i++)
    {
      if(arr1[i]!=arr2[i])
      {
        flag=0;
        break;
      }
    }
    if(flag==1)
    {
      printf("arrays are equal\n");
    }
    else{
      printf("arrays are not equal\n");
    }
  }
}