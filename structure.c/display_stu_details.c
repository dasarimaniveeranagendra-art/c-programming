#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
  char name[20];
  int rollno;
  float marks;
};
int main()
{
  struct student stu1={"Arun",22,69};
  struct student stu2,stu3;
  strcpy(stu2.name,"Mani");
  stu2.rollno=21;
  stu2.marks=76;
  strcpy(stu3.name,"Varun");
  stu3.rollno=23;
  stu3.marks=68;
  printf("stu1:%s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
  printf("stu2:%s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
  printf("stu3:%s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);
}