#include<stdio.h>
#include<string.h>
int main(){
  char str[30];
  int i,count;
  printf("enter string:");
  scanf("%s",str);
  for(i=0;i<strlen(str);i++){
    count=1;
    while(str[i]==str[i+1]){
      count++;
      i++;
    }
    if(count==1){
      printf("%c",str[i]);
    }
    else{
      printf("%d",count);
      printf("%c",str[i]);
    }
    
  }
  printf("\n");
}