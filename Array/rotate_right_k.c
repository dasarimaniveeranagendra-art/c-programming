#include<stdio.h>
int main(){
  void rotate_k(int arr[],int k,int n){
    int i,j;
    k=k%n;
    for(i=0;i<n;i++){
      int temp=arr[0];
      for(j=0;j<n-1;j++){
        arr[j]=arr[j+1];
      }
      arr[n-1]=temp;
    }
  }
  return NULL;
}
int main(){
  int arr[]={1,2,3,4,5};
  int k=2, n=5;
  int i;
  rotate_k(arr,n,k);
  for(i=0;i<n;i++){
    printf("%d",arr[i]);
  }
}