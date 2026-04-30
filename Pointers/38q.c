#include<stdio.h>
#include<stdlib.h>
struct student{
  int id;
  char name[20];
};
int main()
{
  struct student *student[3];
  struct student *(*ptr)[3]=&student;
  for(int i=0;i<3;i++)
  {
    (*ptr)[i]=(struct student*)malloc(sizeof(struct student));
    (*ptr)[i]->id=i+1;
    sprintf((*ptr)[i]->name,"student%d",i+1);
  }
  printf("student list:\n");
  for(int i=0;i<3;i++)
  {
    printf("ID:%d,anme:%s\n",(*ptr)[i]->id,(*ptr)[i]->name);
  }
  for(int i=0;i<3;i++)
  {
    free((*ptr)[i]);
  }
  printf("\n");
}
