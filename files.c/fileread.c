#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *fp;
  //char ch;
  char str[50];
  fp=fopen("read.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  while(!feof(fp))
  {
    fgets(str,15,fp);
    printf("%s",str);
  }
  /*while(!feof(fp))
  {
    ch=fgetc(fp);
    printf("%c",ch);
  }*/
  printf("\n");
  fclose(fp);
}