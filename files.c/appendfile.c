#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char str[50];
  fp=fopen("append.txt","a");
  if(fp==NULL)
  {
    printf("no file exixt\n");
    exit(1);
  }
  printf("enter the content u want to append:");
  gets(str);
  //fputs(str,fp);
  fprintf(fp,"\n%s",str);
  printf("succesfully appended\n");
  fclose(fp);

}