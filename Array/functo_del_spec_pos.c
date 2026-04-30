#include<stdio.h>
void deleteatpos(int arr[],int *n,int pos)
{
  if(pos<0||pos>=*n)
  {
    printf("invalid position\n");
    return;
  }
  for(int i=pos;i<*n-1;i++)
  {
    arr[i]=arr[i+1];
  }
  (*n)--;
}
void printarray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main()
{
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr[0]);
  printf("original array:\n");
  printarray(arr,n);
  int pos=2;
  deleteatpos(arr,&n,pos);
  printf("deleting at pos %d:",pos);
  printarray(arr,n);
}