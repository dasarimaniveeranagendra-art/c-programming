#include<stdio.h>
float add(int ,float),result;
int main()
{
  float(*fp)(int,float);
  float result;
  fp=add;
  /*invoking a function directly using functions pointer*/
  result=add(5,6.6);
  printf("%f\n",result);
  /*invoking a function indirectly by derefrencing function pointer*/
  result=(*fp)(4,5.5);
  printf("%f\n",result);

}
float add(int a,float b)
{
  return a+b;
}