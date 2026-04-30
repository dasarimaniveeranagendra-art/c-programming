#include<stdio.h>
#include<string.h>
void comparestring(char *str1,char *str2,char *str3){
  int i=0;
  while(str1!='\0' && str2!='\0' && str3!='\0'){
    if(str1[i]==str2[i] && str2[i]==str3[i]){
      printf("%c",str1[i]);
    }
    else{
      break;
    }
    i++;
  }
}

int main(){
  char str1[20],str2[30],str3[30];
  printf("enter first string:");
  scanf("%s",str1);
  printf("enter 2nd string:");
  scanf("%s",str2);
  printf("enter 3rd string:");
  scanf("%s",str3);
  printf("common string:");
  comparestring(str1,str2,str3);
  printf("\n");
}