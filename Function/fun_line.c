#include<stdio.h>
void drawline(void);
int main()
{
  drawline();
  return 0;
}
void drawline(void)
{
  int i;
  for(i=0;i<=20;i++)
  {
    printf("-");
  }
}