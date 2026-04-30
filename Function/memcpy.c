#include<stdio.h>
#include<string.h>
void *my_memcpy(char *dest,const char *src,int n){
  int i;
  for(i=0;i<n;i++){
    dest[i]=src[i];
  }
  dest[i]='\0';
  return NULL;
}
int main(){
  char src[50],dest[50];
  int n;
  printf("enter string:");
  scanf("%s",src);
  
  printf("enter no.of bytes to be copied: ");
  scanf("%d",&n);
  my_memcpy(dest,src,n);
  printf("destination string:%s\n",dest);
}