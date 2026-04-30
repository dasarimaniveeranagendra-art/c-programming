#include<stdio.h>
int main()
{
  int num;
  int rev=0,rem;
  printf("enter num:");
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("elements after reversing:%d \n",rev);
}