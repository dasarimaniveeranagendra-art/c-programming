#include<stdio.h>
int main()
{
  int a=5;
  int *p;
  p=&a;
  printf("value of p=address of a=%d->%p\n",a,p);
  printf("value of p=%p\n",++p);
  printf("value of p=%p\n",p++);
  printf("value of p=%p\n",p);
  printf("value of p=%p\n",--p);
  printf("value of p=%p\n",p--);
  printf("value of p=%p\n",p);
}