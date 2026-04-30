#include<stdio.h>
int main(){
  int arr[]={1,2,3,2,4,5};
  int i,k;
  int count=0;
  k=2;
  int n=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<6;i++){
    if(arr[i]==k)
      count++;
  }
  printf("%d occurs %d times",k,count);
}