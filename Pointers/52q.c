/*#include<stdio.h>
int fun(int x)
{
  x=30;
}
int main()
{
  int y=20;
  fun(y);
  printf("%d\n",y);
}*/
#include<stdio.h>
int changeval(int *ptr)
{
  *ptr=30;
}
int main()
{
  int val=20;
  int *ptr=&val;
  changeval(ptr);
  printf("%d\n",val);
}