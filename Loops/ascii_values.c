#include<stdio.h>
int main()
{
  int i;
  for(i=0;i<=255;i++)
  {
    if(i>=32 && i<=126)
    {
      printf("ascii values are:%d-->char:%c\n",i,i);
    }
    else{
      printf("ascii values are:%d-->not printable:\n",i);
    }
  }
  printf("\n");
}