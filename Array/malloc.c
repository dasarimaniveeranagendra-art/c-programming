#include<stdio.h>
#include<stdlib.h>
int main(){
  int *arr,n,sum=0;
  printf("enter the no.of elements u want:");
  scanf("%d",&n);
  arr=(int *)malloc(n *sizeof(int));
  if(arr==NULL)
  {
    printf("memory failed!\n");
    return 1;
  }
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    
  }
  printf("sum=%d\n",sum);
  free(arr);
}