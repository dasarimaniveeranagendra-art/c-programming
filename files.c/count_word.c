#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int count=1;
  char ch;
  fp=fopen("word.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  while((ch=fgetc(fp))!=EOF)
  {
    if((ch==' ')||(ch=='\n'))
    {
      count++;
    }
  }
  fclose(fp);
  //printf("\n");
  printf("no.of words:%d\n",count);
}