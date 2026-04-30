#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp1,*fp2;
  int ch;
  fp1=fopen("abc.txt","r");
  if(NULL==fp1)
  {
    printf("source fine not exists\n");
    exit(1);
  }
  fp2=fopen("destination.txt","w");
  if(NULL==fp2)
  {
    printf("unable to create destination fine\n");
    exit(1);
  }
  while((ch=fgetc(fp1))!=EOF)
  {
    fputc(ch,fp2);
  }
  fclose(fp1);
  fclose(fp2);
  printf("successfully copied\n");
}