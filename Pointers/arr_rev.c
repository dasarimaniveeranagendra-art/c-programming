#include<stdio.h>
int rev(int,int);
int main(){
  int i,j;
  for(i=0,j=5-1;i<j;i++){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  printf("reverse:");
  for(i=0;i<5;i++){
    printf("%d",arr[i]);
  }
}
int rev(int arr[5],)