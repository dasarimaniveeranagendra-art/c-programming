#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp1,*fp2;
  char del[200],ch;
  int deleteline,currentline=1;
  fp1=fopen("curr.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    return 1;
  }
  fp2=fopen("del.txt","w");
  if(fp==NULL)
  {
    printf("unable to open temp file!\n");
    fclose(fp1);
    return 1;
  }
  printf("enter the line no to del:");
  scanf("%d",&deleteline);
  while((ch=fgetc(fp))!=EOF)
  {
    if(ch=='\n')
    {
      currentline++;
    }
    if(currentline!=deleteline)
    {
      fputc(ch,fp2);
    }
  }
  fclose(fp1);
  fclose(fp2);
  remove(de)
}