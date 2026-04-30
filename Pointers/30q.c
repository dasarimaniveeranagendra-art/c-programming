#include<stdio.h>
int swapref(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int a=5,b=6;
  swapref(&a,&b);
  printf("a=%d\nb=%d\n",a,b);

}