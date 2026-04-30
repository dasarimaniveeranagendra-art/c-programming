#include<stdio.h>
int main()
{
  int a,b,temp;
  int sum=0;
  printf("enter numbers:");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
    temp=a;
    a=b;
    b=temp;
  }
  for(int i=a;i<=b;i++)
  {
    if(i%2==0)
    //if(i%2!=0)
    {
      sum=sum+i;
    }
  }
  printf("sum of odd num blw %d and %d:%d\n",a,b,sum);
}