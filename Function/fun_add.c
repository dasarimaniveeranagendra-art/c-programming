#include<stdio.h>
void add(int x,int y);
int main()
{
  int a,b,c;
  printf("enter the values of a and b:");
  scanf("%d%d",&a,&b);
  c=sum(a+b);
  printf("sum of addition is:%d\n");
  return 0;
}
void add(int x,int y)
{
  int c;
  c=x+y;
  return;
}