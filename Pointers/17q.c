#include<stdio.h>
int ref(int *p,int *q,int *r);
int main()
{
  int a=20,b=11,c=31;
  printf("a=%d\tb=%d\tc=%d\n",a,b,c);
  ref(&a,&b,&c);
  printf("a=%d\tb=%d\tc=%d\n",a,b,c);
}
int ref(int *p,int *q,int *r)
{
  (*p)++;
  (*q)++;
  (*r)++;
  printf("*p=%d\t*q=%d\t*r=%d\n",*p,*q,*r);
}