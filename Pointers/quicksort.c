#include<stdio.h>
void swap(int *a,int*b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int partition(int arr[],int lowb,int upb){
  int pivot=arr[upb];
  int j,i=lowb-1;
  for(j=lowb;j<upb;j++){
    if(arr[j]<pivot){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[upb]);
  return i+1;
}
void quicksort(int arr[],int lowb,int upb){
  if(lowb<upb){
    int pi=partition(arr,lowb,upb);
    quicksort(arr,lowb,pi-1);
    quicksort(arr,pi+1,upb);
  }
}
int main(){
  int arr[20],n,i;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter data:");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  quicksort(arr,0,n-1);
  printf("sorted array:");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}