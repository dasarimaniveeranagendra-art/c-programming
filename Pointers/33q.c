#include<stdio.h>
int main()
{
  int arr[20];
  int *ptr=arr;
  int i,j,n;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(*(ptr+i)>*(ptr+j))
      {
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=temp;
      }
    }
  }
  printf("sorted array of pointer:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}