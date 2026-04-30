#include<stdio.h>
#include<string.h>
int main(){
  char str[512];
  int i=0,j=0,k=0,count;
  char word[50][50];
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i];i++){
    if(str[i]!=' ' && str[i]!='\n'){
      word[k][j++]=str[i];
    }
    else{
      word[k][j]='\0';
      k++;
      j=0;
    } 
  }
  if(j>0){
    word[k][j]='\0';
    k++;
  }
  
  printf("unique word:");
  for(i=0;i<k;i++){
    count=0;
    for(j=0;j<k;j++){
      if(strcmp(word[i],word[j])==0){
        count++;
        //break;
      }
    }
    if(count==1){
      printf("%s ",word[i]);
    }
  }
  printf("\n");
  

}