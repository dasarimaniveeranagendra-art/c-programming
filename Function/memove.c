#include<stdio.h>
void *my_memmove(void *dest,const void *src,int n){
  char *d=(char *)dest;
  const char *s=(const char *)src;
  int i;
  if(d<s){
    for(i=0;i<n;i++){
      d[i]=s[i];
    }
  }
  else{
    for(i=n-1;i>=0;i--){
      d[i]=s[i];
    }
  }
  return dest;
}
int main(){
  char str[20]="embedded system";
  printf("before memove:%s\n",str);
  my_memmove(str+9,str,3);
  printf("after memove:%s\n",str);
}