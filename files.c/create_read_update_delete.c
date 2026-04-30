#include<stdio.h>
#include<stdlib.h>
void createfile(char *filename)
{
  FILE *fp=fopen("crud.txt","w");
  if(fp==NULL)
  {
    printf("file not exist\n");
    return;
  }
  printf("file '%s' created successfully\n",crud);
  fclose(fp);
}
void readfile(char *filename)
{
  FILE *fp=fopen("crud.txt","w");
  if(fp==NULL)
  {
    printf("file not exist\n");
    return;
  }
  printf("file '%s' created successfully\n",crud);
  fclose(fp);
}
int main()
{

}