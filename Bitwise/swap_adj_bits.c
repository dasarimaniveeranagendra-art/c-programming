#include<stdio.h>
int printbinary(unsigned int num){
  for(int i=7;i>=0;i--){
    printf("%d",(num>>i)&1);
  }
  printf("\n");
}
int main(){
  int num;
  printf("enter number from (0-255):");
  scanf("%u",&num);
  printf("before swap:");
  printbinary(num);
  num=(((num & 0xAA)>>1)|((num & 0x55)<<1));
  printf("after swap:");
  printbinary(num);
}