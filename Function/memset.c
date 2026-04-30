#include<stdio.h>
#include<string.h>
void *my_memset(char *ptr,char val,int n){
  int i;
  for(i=0;i<n;i++){
    ptr[i]=val;
  }
  return NULL;
}
int main(){
  char str[]="embedded system";
  printf("before memset:%s\n",str);
  my_memset(str+9,'.',5*sizeof(char));
  printf("after memset:%s\n",str);
}