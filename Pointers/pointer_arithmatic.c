#include<stdio.h>
int main()
{
  int a=10, *pi=&a;
  char b='z',*pc=&b;
  float c=4.4,*pf=&c;
  printf("value pf pi=address of a=%p\n",pi);
  printf("value pf pc=address of b=%p\n",pc);
  printf("value pf pf=address of c=%p\n",pf);
  pi++;
  pc++;
  pf++;
  printf("value pi=%u\n",pi);
  printf("value pc=%u\n",pc);
  printf("value pf=%u\n",pf);
}