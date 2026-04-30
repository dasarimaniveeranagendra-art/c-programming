/*#include<stdio.h>
int main()
{
  int num,i;
  int sum=0;
  int odd;
  printf("enter num:");
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    if(i%2!=0)
    {
      sum+=i;
    }
  }
  printf("sum of odd from 1 to %d=%d\n",num,sum);
  
}*/


//sum of even and odd digits seperatly .
#include<stdio.h>
int main()
{
  int num,digit;
  int odd=0,even=0;
  printf("enter a num:");
  scanf("%d",&num);
  while(num>0)
  {
    digit=num%10;
    if(digit%2==0)
    {
      even+=digit;
    }
    else{
      odd+=digit;
    }
    num=num/10;
  }
  printf("sum of even:%d\n",even);
  printf("sum of odd:%d\n",odd);
}