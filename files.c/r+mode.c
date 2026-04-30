#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char str[40];
  fp=fopen("r+mode.txt","r+");
  if(fp==NULL)
  {
    printf("file not exixt\n");
    exit(1);
  }
  while(!feof(fp))
  {
    fgets(str,5,fp);
    printf("%s",str);
  }
  fputs("mani",fp);
  //fputc('z',fp);
  printf("\nfile successfully\n");
  fclose(fp);
}