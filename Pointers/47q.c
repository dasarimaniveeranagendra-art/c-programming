#include<stdio.h>
int main()
{
  int a[3]={10,20,30};
  int (*p)[3]=&a;
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("(*p)[%d]=%d\n",i,(*p)[i]);
  }
  
}