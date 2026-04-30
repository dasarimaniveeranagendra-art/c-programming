#include<stdio.h>
int main()
{
  int n,a=0,b=1;
  int next=a+b;
  printf("enetr numbers:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("%d ",a);
    next=a+b;
    a=b;
    b=next;
  }
  printf("\nfibonacci series:%d\n",a);
}