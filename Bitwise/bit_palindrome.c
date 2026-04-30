#include<stdio.h>
int isbinarypalindrome(unsigned int num){
  unsigned int original=num;
  unsigned int reverse=0;
  while(num>0){
    reverse=((reverse<<1) | (num & 1));
    num>>=1;
  }
  return original==reverse;
}
int main(){
  unsigned int num;
  printf("enter num:");
  scanf("%d",&num);
  if(isbinarypalindrome(num)){
    printf("number is palindrome\n");
  }
  else{
    printf("not palindrome\n");
  }

}
