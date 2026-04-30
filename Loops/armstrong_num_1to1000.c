#include<stdio.h>
int main()
{
  int n,rem,sum;
  int i,original;
  printf("armstrong num from 1 to 1000:");
  scanf("%d",&n);
  for(i=1;i<=1000;i++)
  {
    sum=0;
    n=i;
    original=i;
    while(n>0)
    {
      rem=n%10;
      sum+=rem*rem*rem;
      n=n/10;
    }
    if(sum==original)
    {
      printf("%d\n",original);
    }
  }
}