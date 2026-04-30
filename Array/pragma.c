/*#include<stdio.h>
#pragma pack(1)
struct student{
  char grade;
  int marks;
};
int main(){
  struct student s;printf("size of structure=%lu bytes\n",sizeof(s));

}
#include<stdio.h>
#pragma pack(1)
struct Test{
  char a;
  int b;
};
int main(){
  struct Test t;
  printf("size of structur=%lu bytes\n",sizeof(t));
}*/
#include<stdio.h>
#pragma message("compiling the program..")
int main(){
  printf("hello from pragma message!\n");
}