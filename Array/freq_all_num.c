#include<stdio.h>
int main(){
  int arr[]={1,2,2,3,2,4,9};
  int i,n=sizeof(arr)/sizeof(arr[0]);
  int freq[100]={0};
  for(i=0;i<n;i++){
    freq[arr[i]]++;
  }
  for(i=0;i<100;i++){
    if(freq[i]!=0){
      printf("%d occurs %d times\n",i,freq[i]);
    }
  }

}