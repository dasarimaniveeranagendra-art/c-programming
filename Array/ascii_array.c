#include<stdio.h>
int main()
{
  char arr[256];
  int i,n=256;
  for(i=0;i<=255;i++)
  {
    if(i>=32 && i<=126)
    {
      printf("ascii values are:%d-->char:%c\n",i,i);
    }
    else{
      printf("ascii values are not printable\n");
    }
  }
}