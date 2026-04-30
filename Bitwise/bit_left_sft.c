#include<stdio.h>
int main()
{
  unsigned int x=0x53;
  unsigned int mask=1<<4;
  if(x & mask)
  {
    printf("4th bit is set to 1\n");
  }
  else
  {
    printf("4th bit is set to 0\n");
  }
}