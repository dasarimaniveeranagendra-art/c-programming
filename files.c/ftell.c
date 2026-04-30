#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  //int pos;
  char str[20];
  fp=fopen("ftell.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    exit(1);
  }
  //pos=ftell(fp);
  //printf("%d\n",pos);
  fscanf(fp,"%s",str);
  printf("\n%s",str);
  fseek(fp,0,SEEK_END);
  printf("%ld\n",ftell(fp));
  fclose(fp);
}
