#include<stdio.h>
int *fun(int,int);
int main()
{
  int n=5,arr[10]={1,2,3,4,5,6,7,8,9,10};
  int *ptr;
  ptr=fun(arr,n);
  printf("value of arr=%p\nvalue of ptr=%p\nvalur of *ptr=%d\n",arr,ptr,*ptr);
}
int *fun(int *p,int n)
{
  p=p+n;
  return p;
}