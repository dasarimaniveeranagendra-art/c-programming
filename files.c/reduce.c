#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp1,*fp2;
  fp1=fopen("reduce.txt","r");
  fp2=fopen("compress.txt","w");
  if(fp1==NULL || fp2==NULL)
  {
    printf("file not exist\n");
    return 0;
  }
  char str[50];
  char ch,prev;
  int count=0;
  prev=fgetc(fp1);
  if(prev!=EOF)
  {
    count=1;
    while((ch=fgetc(fp1))!=EOF)
    {
      if(ch==prev)
      {
        count++;
      }
      else{
        fputc(prev,fp2);
        if(count>1)
        {
          fprintf(fp2,"%d",count);
        }
        prev=ch;
        count=1;
      }
    }
    fputc(prev,fp2);
    if(count>1)
    {
      fprintf(fp2,"%d",count);
    }
  }
  fclose(fp1);
  fclose(fp2);
  printf("file compressed successfully\n");
}