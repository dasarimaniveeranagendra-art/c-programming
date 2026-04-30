#include<stdio.h>
int main()
{
  int i=0;
  int j,n;
  int arr[20];
  int ceil=0;
  int floor=0;
  printf("enter size of sorted array:");
  scanf("%d",&n);
  printf("enetr sorted array:");
  for(j=0;j<n;j++)
  {
    scanf("%d",&arr[j]);
  }
  while(i<=10)
  {
    ceil=i+1;
    floor=i-1;
    int cfound=0;
    int ffound=0;
    for(int k=0;k<n;k++)
    {
      if(ceil==arr[k])
      {
        printf("%d ceil is %d\n",i,ceil);
        cfound=1;
      }
      if(floor==arr[k])
      {
        printf("%d floor is %d\n",i,floor);
        ffound=1;
      }
    }
    if(cfound==0)
    {
      printf("ceil:NULL\n");
    }
    if(ffound==0)
    {
      printf("floor:NULL\n");
    }
    i++;
  }
}