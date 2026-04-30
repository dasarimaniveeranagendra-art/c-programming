#include<stdio.h>
int main()
{
  int a=12,*p=&a;
  char b='x',*q=&b;
  float c=12.4,*r=&c;
  printf("sizeof(p)=%d\nsizeof(*p)=%d\n",sizeof(p),sizeof(*p));
  printf("sizeof(q)=%d\nsizeof(*q)=%d\n",sizeof(q),sizeof(*q));
  printf("sizeof(r)=%d\nsizeof(*r)=%d\n",sizeof(r),sizeof(*r));
}