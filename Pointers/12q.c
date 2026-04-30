#include<stdio.h>
int main()
{
  int arr[5]={10,20,30,40,50};
  int *p=arr;
  int (*ptr)[5]=&arr;
  printf("p=%p\tptr=%p\n",p,ptr);
  printf("*p=%d\t*ptr=%p\n",*p,*ptr);
  printf("sizeof(p)=%u\tsizeof(*p)=%u\n",sizeof(p),sizeof(*p));
  printf("sizeof(ptr)=%u\tsizeof(*ptr)=%u\n",sizeof(ptr),sizeof(*ptr));
}
