#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int fp;
  fp=fopen("text_file.txt","r");
  if(fp==-1)
  {
    printf("file not exist\n");
    exit(1);
  }
  while(!feof(fp))
  
}
