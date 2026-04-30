#include<stdio.h>
void reverse(int *a,int start,int end){
  while(start<end){
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
  }
    
}
int main(){
  int n,k,a[20];
  printf("enter size:");
  scanf("%d",&n);
  printf("enter elements:");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("enter kth postiotn to rotate right:");
  scanf("%d",&k);
  k=k%n;
  reverse(a,0,n-k-1);
  reverse(a,n-k,n-1);
  reverse(a,0,n-1);
  printf("after rotating right by %d :",k);
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}