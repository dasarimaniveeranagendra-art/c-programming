#include<stdio.h>
#include<string.h>
int main(){
  char str[30]="madam";
  int i,j,len=0;
  int flag=0;
  for(i=0;i<len;i++){
    len++;
  }
  for(i=0,j=len-1;i<j;i++,j--){
    if(str[i]!=str[j]){
      flag=1;
      break;
    }
  }
  if(flag==1){
    printf("not %s:palindrome\n",str);
  }
  else
  {
    printf("%s: palindrome\n",str);
  }
  
}