#include<stdio.h>
int main()
{
  int num,i,sum=0;
  printf("enter the num:");
  scanf("%d",&num);
  if(num>0)
  {
    for(i=1;i<=num;i++)
    {
      sum+=(i*i*i);
    }    
    printf("sum of cubes 1 to %d=%d\n",num,sum);
  }
  else{
    printf("negative a numbers");
  }
}