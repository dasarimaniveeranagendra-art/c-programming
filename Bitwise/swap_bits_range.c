#include<stdio.h>
int printbinary(unsigned int num){
  for(int i=7;i>=0;i--){
    printf("%d",(num>>i)&1);
  }
}
int swap_bit_range(int num,int p,int q,int n){
  int mask=(1<<n)-1;
  int set1=(num>>p)& mask;
  int set2=(num>>q)& mask;
  int xor=set1^set2;
  xor=(xor<<p)|(xor<<q);
  num^=xor;
  return num;
}
int main(){
  int num,p,q,n;
  printf("enter value for num:");
  scanf("%d",&num);
  printf("enter 1st pos:");
  scanf("%d",&p);
  printf("enter 2nd pos:");
  scanf("%d",&q);
  printf("enter n value:");
  scanf("%d",&n);
  printf("before:");
  printbinary(num);
  num=swap_bit_range(num,p,q,n);
  printf("\nafter:");
  printbinary(num);
  printf("\n"); 

}