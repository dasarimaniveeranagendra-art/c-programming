#include<stdio.h>
int main()
{
  int arr[20];
  int n,i,j,k;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter data:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      printf("{");
      int sum=0;
      for(k=i;k<j;k++)
      {
        printf("%d",arr[k]);
        sum+=arr[k];
      }
      printf("sum=%d",sum);
      printf("}\n");
    }
    
  }
}