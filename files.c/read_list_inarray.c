#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LINES 100
#define MAX_LEN 256
int main(){
  FILE *fp;
  char lines[MAX_LINES][MAX_LEN];
  int count=0;
  char filename[100];
  printf("enter filename to read:");
  scanf("%s",filename);
  fp=fopen(filename,"r");
  if(fp==NULL)
  {
    perror("error opening file\n");
    return 1;
  }
  while(fgets(lines[count],MAX_LEN,fp)!=NULL){
    lines[count][strcspn(lines[count],"\n")]='\0';
    count++;
    if(count>=MAX_LINES){
      printf("reached maximum line limit (%d)\n",MAX_LINES);
      break;
    }
  }
  fclose(fp);
  printf("\n---File content (%d lines)---\n",count);
  for(int i=0;i<count;i++){
    printf("%d:%s\n",i+1,lines[i]);
  }
}