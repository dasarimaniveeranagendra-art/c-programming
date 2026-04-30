#include<stdio.h>
int main(){
  int arr[20];
  int i,n;
  printf("enter no.of size:");
  scanf("%d",&n);
  printf("enter data:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    if(arr[0]>1)
    {
      printf("missing element: 1\n");
      break;
    }
    if(arr[i]+1!=arr[i+1]){
      printf("missing element is:%d\n",arr[i]+1);
      break;
    }
    if(i==n-1)
    {
      printf("missing element:%d\n",arr[i]+1);
      
    }
  }
}