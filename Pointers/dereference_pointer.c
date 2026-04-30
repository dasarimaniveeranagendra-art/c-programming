#include<stdio.h>
int main()
{
  int a=20;
  float b=2.32;
  int *p1=&a;
  float *p2=&b;
  printf("value of p1=address of a=%u\n",p1);
  printf("value of p2=address of b=%u\n",p2);
  printf("value of p1=%u\n",&p1);
  printf("value of p2=%u\n",*p2);
  printf("value of a=%d\n",a);
  printf("value of b=%f\n",b);

}