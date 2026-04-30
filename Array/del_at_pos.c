#include<stdio.h>
int main()
{
  int arr[30]={10,20,30,40,50};
  int i,n=5,pos;
  printf("original array:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\nwhich pos u want to delete:");
  scanf("%d",&pos);
  if(pos<1||pos>n)
  {
    printf("invalid position\n");
  }
  else{
    for(int i=pos-1;i<n-1;i++)
    {
      arr[i]=arr[i+1];
    }
    n--;
  
  }
  printf("after deletion:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}