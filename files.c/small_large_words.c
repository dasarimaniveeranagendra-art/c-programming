#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M_WORD_LEN 100
int main()
{
  FILE *fp;
  fp=fopen("smlrg.txt","r");
  if(fp==NULL)
  {
    printf("file not exist\n");
    return 1;
  }
  char word[M_WORD_LEN];
  char small[M_WORD_LEN]="";
  char large[M_WORD_LEN]="";
  while(fscanf(fp,"%s",word)!=EOF)
  {
    if(small[0]=='\0' || strlen(word)<strlen(small))
    {
      strcpy(small,word);
    }
    if(strlen(word)>strlen(large))
    {
      strcpy(large,word);
    }
  }
  printf("smallest string:%s\n",small);
  printf("largest string:%s\n",large);
  fclose(fp);
}