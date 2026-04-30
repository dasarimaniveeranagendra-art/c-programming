#include<stdio.h>
int main()
{
  int a;
  int i;
  printf("enter number:");
  sacnf("%d",&a);
  for (int  i = 0; i < a; i++)
  {
    if(a==0)
    {
      printf("%d*%d=%d",a);
    }
  }
  
}