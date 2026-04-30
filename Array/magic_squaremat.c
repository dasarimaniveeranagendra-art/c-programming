#include<stdio.h>
#define max 3
int main()
{
  int a[max][max];
  int n,i,j,num;
  printf("enter the n (odd values):");
  scanf("%d",&n);
  i=n-1;
  j=(n-1)/2;
  for(num=1;num<=n*n;num++)
  {
    a[i][j]=num;
    i++;
    j--;
    if(num%n==0)
    {
      i-=2;
      j++;
    }
    if(i==n)
    {
      i=0;
    }
    if(j==-1)
    {
      j=n-1;
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%4d ",a[i][j]);
    }
    printf("\n");
  }
}