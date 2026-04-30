#include<stdio.h>
int fibnocci(int n)
{
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
  else{
    return fibnocci(n-1)+fibnocci(n-2);
  }
}
int main()
{
  int n=10;
  printf("fibnocci series(recursive):\n");
  for(int i=0;i<n;i++)
  {
    printf("%d ",fibnocci(i));
  }
  printf("\n");
}