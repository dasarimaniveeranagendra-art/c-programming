#include<stdio.h>
struct book
{
  char name[10];
  int nop;
  float price;
};
int main()
{
  struct book b1,b2,b3;
  struct book b[3];
  for(int i=0;i<3;i++)
  {
    printf("enter book details:%d\n",i+1);
    printf("name:");
    scanf("%s",b[i].name);
    printf("no.of pages:");
    scanf("%d",&b[i].nop);
    printf("price:");
    scanf("%f",&b[i].price);
  }
  printf("\nenter book details:\n");
  for(int i=0;i<3;i++)
  {
    printf("book %d - name:%s, no.of pages:%d, price:%2f\n",i+1,b[i].name,b[i].nop,b[i].price);
  }
}