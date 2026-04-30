#include<stdio.h>
#include<string.h>
#define M_WORD_LEN 100
int main()
{
  char str[M_WORD_LEN];
  printf("enter the string:");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  char word[M_WORD_LEN];
  char small[M_WORD_LEN]="";
  char large[M_WORD_LEN]="";
  strcpy(word,str);
  if(small[0]=='\0' || strlen(word)<strlen(small))
  {
    strcpy(small,word);
  }
  if(strlen(word)>strlen(large))
  {
    strcpy(large,word);
  }
  printf("small word:%s\n",small);
  printf("large word:%s\n",large);
}