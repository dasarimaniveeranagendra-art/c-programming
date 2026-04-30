#include<stdio.h>
void merge(int a[],int l,int m,int h){
  int temp[50];
  int i=l;
  int j=m+1;
  int k=0;
  while(i<=m && j<=h){
    if(a[i]<a[j]){
      temp[k++]=a[i++];
    }
    else{
      temp[k++]=a[j++];
    }
  }
  while(i<=m){
    temp[k++]=a[i++];
  }
  while(j<=h){
    temp[k++]=a[j++];
  }
  k=0;
  for(int x=l;x<=h;x++){
    a[x]=temp[k++];
  }
}
void mergesort(int a[],int l,int h){
  if(l<h){
    int m=(l+h)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,h);
    merge(a,l,m,h);
  }
}
int main(){
  int a[20],n,i;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter data:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  mergesort(a,0,n-1);
  printf("sorted array:");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}