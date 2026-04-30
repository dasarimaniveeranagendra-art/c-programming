#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void longest(char *str){
    int max=0,start=0,index=0;
    int freq[128];
    for(int i=0;i<128;i++){
        freq[i]=-1;
    }
    for(int i=0;str[i];i++){
        if(freq[(int)str[i]!=-1]&& freq[(int)str[i]]>=start){
            start=freq[(int)str[i]]+1;
        }
        freq[(int)str[i]]=i;
        if(max<i-start+1){
            max=i-start+1;
            index=start;
        }
    }
    printf("substring:");
    for(int i=index;i<index+max;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    printf("longest lenghth of the substring without repeating characters:%d",max);
}
int main(){
    char *str=malloc(100);
    if(str==NULL){
        printf("memory allocation failed");
        exit(1);
    }
    printf("enter a string:");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    longest(str);
    printf("\n");
}