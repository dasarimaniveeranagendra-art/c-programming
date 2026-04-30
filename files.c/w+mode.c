#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char str[30];
  char ch;
  fp=fopen("w+mode.txt","w+");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  fputs("mani",fp);
  rewind(fp);
  while(!feof(fp))
  {
    ch=fgetc(fp);
    //fgets(str,5,fp);
    //printf("%s",str);
    printf("%c\n",ch);
  }
  fclose(fp);
}