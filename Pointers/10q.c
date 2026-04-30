#include<stdio.h>
int main()
{
  int arr[20]={10,20,30,40,20};
  int i,*p;
  for(i=0;i<5;i++)
  {
    printf("value arr[%d]=%d\naddressof array=%p\n",i,arr[i],p+i);
  }
}