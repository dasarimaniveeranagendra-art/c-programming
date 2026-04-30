#include<stdio.h>
int main()
{
  int *p1;
  char *p2;
  float *p3;
  double *p4;
  printf("size of int pointer:%zubytes\n",sizeof(p1));
  printf("size of char pointer:%zubytes\n",sizeof(p2));
  printf("size of float pointer:%zubytes\n",sizeof(p3));
  printf("size of double pointer:%zubytes\n",sizeof(p4));
}