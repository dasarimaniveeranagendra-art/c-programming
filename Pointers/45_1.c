#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a[3],i,j,col;
  printf("enter no.of col:");
  scanf("%d",&col);
  for(i=0;i<3;i++)
  {
    a[i]=(int *)malloc(col*sizeof(int));
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("enter the value a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("the matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("%5d",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<3;i++)
  {
    free(a[i]);
  }
  
}