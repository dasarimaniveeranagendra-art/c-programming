#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  fp=fopen("a+mode.txt","a+");
  if(fp==NULL)
  {
    printf("file not exixt\n");
    exit(1);
  }
  fputs("this is awesome",fp);
  rewind(fp);
  while(!feof(fp))
  {
    ch=fgetc(fp);
    printf("%c",ch);
  }
  //fputs("this is awesome",fp);
  printf("file successfully\n");
  fclose(fp);
}