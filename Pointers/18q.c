#include<stdio.h>
int func(int x,int y,int *psum,int *pdiff,int *pprod);
int main()
{
  int a,b,sum,diff,prod;
  a=10,b=5;
  func(a,b,&sum,&diff,&prod);
  printf("sum=%d\tdiff=%d\tprod=%d\n",sum,diff,prod);
  
}
int func(int x,int y,int *psum,int *pdiff,int *pprod)
{
  *psum=x+y;
  *pdiff=x-y;
  *pprod=x*y;
}