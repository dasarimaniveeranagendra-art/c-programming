#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *string_copy(const char *src)
{
  char *copy=(char *)malloc(strlen(src)+1);
  if(copy==NULL){
    printf("memory error!\n");
    exit(1);
  }
  strcpy(copy,src);
  return copy;
}
int main(){
  char *original="HELLO,malloc!";
  char *duplicate=string_copy(original);
  printf("orginal=%s\n",original);
  printf("duplicate=%s\n",duplicate);
  free(duplicate);
}