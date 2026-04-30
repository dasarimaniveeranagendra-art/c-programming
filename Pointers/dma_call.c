#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i;
  int *ptr=(int*)malloc(5* sizeof(int));
  if(ptr==NULL)
  {
    printf("memory not allocated");
    return 1;
  }
  for(i=0;i<5;i++)
  ptr[i]=i+1;
  printf("elements are:");
  for(i=0;i<5;i++)
  printf(" %d",ptr[i]);
  printf("\n");
  int *extra=(int*)calloc(3,sizeof(int));
  ptr=(int*)realloc(ptr,8* sizeof(int));
  for(i=5;i<8;i++)
  ptr[i]=i+1;
  printf("after realloc:");
  for(i=0;i<8;i++)
  printf(" %d",ptr[i]);
  printf("\n");
  free(extra);
  free(ptr);
}