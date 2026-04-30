#include<stdio.h>
#include<stdlib.h>
#define n 5
struct student
{
  char name[20];
  int rollno;
  int marks[6];
  int total;
  char grade;
};
void display(struct student arr);
void calculate(struct student arr[]);
void sort(struct student arr[]);
int main()
{
  struct student stu[n],temp;
  int i,j;
  for(i=0;i<n;i++)
  {
    printf("enter name:");
    scanf("%s",stu[i].name);
    printf("enter rollno:");
    scanf("%d",&stu[i].rollno);
    stu[i].total=0;
    printf("enter marks in 6 subs:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&stu[i].marks[j]);
    }
  }
    calculate(stu);
    sort(stu);
    for(i=0;i<n;i++)
    {
      display(stu[i]);
    }
}
void calculate(struct student stu[])
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<6;j++)
    {
      stu[i].total+=stu[i].marks[j];
    }
    if(stu[i].total>500)
      stu[i].grade='A';
    else if (stu[i].total>400)
      stu[i].grade='B';
    else if(stu[i].total>250)
      stu[i].grade='C';
    else
      stu[i].grade='D';
  }
}
void sort(struct student stu[])
{
  int i,j;
  struct student temp;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(stu[i].total<stu[j].total)
      {
        temp=stu[i];
        stu[i]=stu[j];
        stu[j]=temp;
      }
    }
  }
}
void display(struct student stu)
{
  printf("rollno-%d\n",stu.rollno);
  printf("name-%s\n",stu.name);
  printf("total-%d\n",stu.total);
  printf("grade-%c\n",stu.grade);
}


