#include<stdio.h>
int main()
{
  int arr[20]={10,20,30,40,50};
  int *ptr;
  int i;
  ptr=arr;
  printf("value\taddress\n");
  for(i=0;i<5;i++)
  {
    printf("%d\t%p\n",*(ptr+i),(ptr+i));
  }
}