#include<stdio.h>
int printbinary(unsigned int num){
  for(int i=3;i>=0;i--){
    printf("%d",(num>>i)&1);
  }
  printf("\n");
}
int add(int a,int b){
  while(b!=0){
    int sum=a^b;
    int carry=(a&b)<<1;
    a=sum;
    b=carry;
  }
  return a;
}
int main(){
  unsigned int num;
  num=add(5,3);
  printf("sum=%d\n",num);
  printbinary(num);

}