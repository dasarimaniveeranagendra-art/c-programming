#include<stdio.h>
int main()
{
  int l,b,area=0,i;
  printf("enter the length:");
  scanf("%d",&l);
  printf("enter the breadth:");
  scanf("%d",&b);
  //area=l*b;
  if(l>0&&b>0)
  {
    for(i=0;i<l;i++)
    {
      area=area+b;
    }
    printf("area=%d\n",area);
  }
  else{
    printf("length and breadth must be positive:\n ");
  }
}