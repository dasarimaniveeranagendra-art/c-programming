#include<stdio.h>
int main()
{
  int arr[30];
  int i,j,n,temp;
  int start,end;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter start and end position to reverse:");
  scanf("%d%d",&start,&end);
  i=start;
  j=end;
  while(i<j)
  {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
      j--;
    
  }
  printf("array after reversing:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}