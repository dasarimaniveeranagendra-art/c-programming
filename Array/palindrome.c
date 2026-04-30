#include<stdio.h>
int main()
{
  int num,start,final=0,digit;
  printf("enter the palindrome:");
  scanf("%d",&num);
  start=num;
  while(num>0)
  {
    digit=num%10;
    final=(final*10)+digit;
    num=num/10;
  }
  if(start==final)
  {
    printf("it is palindrome");
  }
  else{
    printf("it is not palindrome");
  }
}
