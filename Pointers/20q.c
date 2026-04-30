#include<stdio.h>
void swap(int *p,int *q);
void main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("\na=%d\tb=%d",a,b);
}
void swap(int *p,int *q)
{
  int temp=*p;
  *p=*q;
  *q=temp;
  printf("\n");
}