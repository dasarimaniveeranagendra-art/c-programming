#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *fp;
  //char ch='a';
  char str[20];
  int i,a=20;
  fp=fopen("char.txt","w");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  //fputc(ch,fp);
  printf("enter string:");
  gets(str);
  for(i=0;i!=strlen(str);i++)
    fputc(str[i],fp);
    //fprintf(fp,"%d%s",a,str);
  printf("successfully written\n");
  fclose(fp);
}