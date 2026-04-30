#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("mani.txt","r");
  if(fp==NULL)
  {
    printf("file not exists\n");
    return 0;
  }
  else{
    printf("file exists but information not contain\n");
    fclose(fp);
  }
}