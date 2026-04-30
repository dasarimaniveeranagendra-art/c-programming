#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *arr;
  int i,j,n;
  printf("enter size:");
  scanf("%d",&n);
  arr=(int*)malloc(n* sizeof(int));
  printf("enter data:");
  for(i=0;i<n;i++)
  {
    scanf("%d",(arr+i));
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(*((arr+i)+j)>*((arr+i)+j+1))
      {
        int temp=*((arr+i)+j);
        *((arr+i)+j)=*((arr+i)+j+1);
        *((arr+i)+j+1)=temp;
      }
    }
  }
  printf("sorting of array:");
  for(i=0;i<n;i++)
  {
    printf("%d ",*(arr+i));
  }
  printf("\n");
  free(arr);
  
}