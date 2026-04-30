#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,i,n;
  printf("enter the no.of integers:");
  scanf("%d",&n);
  p=(int *)malloc(n* sizeof(int));
  if(p==NULL)
  {
    printf("memory not available\n");
    exit(1);
  }
  for (i = 0; i < n; i++)
  {
    printf("enter an interger:");
    scanf("%d",p+i);
  }
  for(i=0;i<n;i++)
  {
    printf("%d\t",*(p+i));
  }
  printf("\n");
  
}
