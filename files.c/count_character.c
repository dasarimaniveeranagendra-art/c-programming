#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int count=0;
  //char str[200];
  char ch;
  fp=fopen("count.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  while((ch=fgetc(fp))!=EOF)
  {
    count++;
  }
  fclose(fp);
  printf("no.of charactedr:%d\n",count);
}