#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  //char ch;
  char str[30];
  fp=fopen("fseek.txt","r+");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  fseek(fp,7,SEEK_SET);
  fputs("hi",fp);
  /*ch=fgetc(fp);
  printf("file successfully exist\n");
  printf("%c\n",ch);
  //printf("\n");
  fseek(fp,-4,SEEK_CUR);
  ch=fgetc(fp);
  printf("%c\n",ch);
  fseek(fp,-5,SEEK_END);
  ch=fgetc(fp);
  printf("%c\n",ch);
*/
  
  fclose(fp);
}