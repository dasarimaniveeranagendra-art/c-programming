#include<stdio.h>
int main()
{
  int b[100],i,j,n;
  printf("enter num:");
  scanf("%d",&n);
  if(n==0)
  {
    printf("binary");
    return 0;
  }
  i=0;
  while(n>0)
  {
    b[i]=n%2;
    n=n/2;
    i++;
  }
  for(j=i-1;j>=0;j--)
  {
    printf("%d",b[j]);
  }
  printf("\n");
}