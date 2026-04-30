#include<stdio.h>
int main()
{
  int arr[100];
  int i,n;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements for range 1 to n:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=1;i<n;i++)
  {
    if(i%2!=0)
    {
      printf("%d ",i);
    }
  }
  printf("\n");
}
