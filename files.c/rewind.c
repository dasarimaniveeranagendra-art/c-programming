#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  fp=fopen("rewind.txt","a+");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  fseek(fp,6,SEEK_SET);
  while(!feof(fp))
  {
    ch=fgetc(fp);
    printf("%c",ch);
  }
  //rewind(fp);
  while(!feof(fp))
  {
    ch=fgetc(fp);
    printf("%c\n",ch);
  }
  printf("\n");
  fclose(fp);
}