#include<stdio.h>
#include<stdlib.h>
struct book
{
  char name[10];
  int no_pg;
  float price;
};
int main(){
  struct book b1={"science",550,150.49};
  struct book b2={"Maths",700,225.50};
  struct book b3={"physics",380,180.25};
  struct book *ptr1,*ptr2,*ptr3;
  ptr1=&b1;
  ptr2=&b2;
  ptr3*=&b3;
  printf("b1=%s %d %.2f\n",b1.name,b1.no_pg,b1.price);
  printf("b2=%s %d %.2f\n",b2.name,b2.no_pg,b2.price);
  printf("b3=%s %d %.2f\n",b3.name,b3.no_pg,b3.price);
}