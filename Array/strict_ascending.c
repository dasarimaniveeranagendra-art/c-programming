#include<stdio.h>
int isascending(int arr[],int n)
{
  if(n==1)
  {
    return 1;
  }
  if(arr[n-2]>=arr[n-1])
  {
    return 0;
  }
  return isascending(arr,n-1);
}
int main()
{
  int arr[30]={1,2,3,4,5};
  int n=5,i;
  printf("original array:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  if(isascending(arr,n))
  {
    printf("\nit is strict ascending order\n");
  }
  else{
    printf("\nit is not strict ascending order\n");
  }
  
}