#include<stdio.h>
void reverse(int arr[],int i,int j)
{
  if(i>=j)
  {
    return;
  }
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  reverse(arr,i+1,j-1);
}
int main()
{
  int num;
  int arr[50];
  printf("enter size:");
  scanf("%d",&num);
  printf("enter elements:");
  for(int i=0;i<num;i++)
  {
    scanf("%d",&arr[i]);
  }
  reverse(arr,0,num-1);
  for(int i=0;i<num;i++)
  {
    printf("%d",arr[i]);
  }
}