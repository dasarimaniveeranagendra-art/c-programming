#include<stdio.h>
int value(int x,int y);
int main()
{
  int a=5,b=8;
  printf("a=%d\tb=%d\n",a,b);
  value(a,b);
  printf("a=%d\tb=%d\n",a,b);
}
int value(int x,int y)
{
  x++;
  y++;
  printf("x=%d\ty=%d\n",x,y);
}