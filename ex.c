/*#include<stdio.h>
int main()
{
  int n,sum;
  printf("enter a number:");
  scanf("%d",&n);
  while(n>=10)
  {
    sum=0;
    while(n!=0)
    {
      sum+= n%10;
      n/=10;
    }
    n=sum;
  }
  printf("single digit sum is:%d\n",n);
}*/ 
#include<stdio.h>
int main()
{
  int n,a[50],sum=0;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the elements:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  printf("sum of array is %d\n",sum);
}
  