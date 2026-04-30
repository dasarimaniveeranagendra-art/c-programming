#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int count=1;
  char str[200];
  char ch;
  fp=fopen("count.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  while(fgets(str,sizeof(str),fp)!=NULL)
  {
    printf("%d: %s",count,str);
    count++;
  }
  /*while((ch=fgetc(fp))!=EOF)
  {
    if(ch=='\n')
    {
      count++;
    }
  }*/
  fclose(fp);
  printf("\n");
 // printf("no.of lines:%d\n",count);
}