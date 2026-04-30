#include<stdio.h>
void printbinary(unsigned int n)
{
  for(int i=7;i>=0;i--)
  {
    printf("%d",(n>>i)&1);
  }
  printf("\n");
}
int main()
{
  unsigned int x,y;
  printf("enter the value:\n");
  scanf("%d %d",&x, &y);
  printf("before swap:\n");
  printf("x=%d\t", x); printbinary(x);
  printf("y=%d\t", y); printbinary(y);
  x=x^y;
  y=x^y;
  x=x^y;
  printf("after swap:\n");
  printf("x=%d\t", x); printbinary(x);
  printf("y=%d\t", y); printbinary(y);
}