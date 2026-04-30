#include<stdio.h>
int main()
{
  int age=30;
  float sal=15000.00;
  printf("age=%d\naddress of age=%u\n",age,&age);
  printf("sal=%f\naddress of sal=%u\n",sal,&sal);
}