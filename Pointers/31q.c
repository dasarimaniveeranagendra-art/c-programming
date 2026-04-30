#include<stdio.h>
int main()
{
  int n,i;
  int fact=1;
  int *ptr=&fact;
  printf("enter num:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    *ptr=*ptr*i;
  }
  printf("factorial num %d=%d\n",n,*ptr);
}