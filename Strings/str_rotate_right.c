#include<stdio.h>
#include<string.h>
void reverse(char *str,int start,int end){
  while(start<end){
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
  }
}
int main(){
  char str[30]="linux";
  int k;
  printf("enter k:");
  scanf("%d",&k);
  int n=strlen(str);
  k=k%n;
 
  reverse(str,0,n-1);
  reverse(str,0,k-1);
  reverse(str,k,n-1);
  printf("after reverseing:%s\n",str);
}