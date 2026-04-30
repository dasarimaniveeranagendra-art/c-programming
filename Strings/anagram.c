#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    int i,j,found;
    printf("enetr 1st sring:");
    scanf("%s",str1);
    printf("enter 2nd string:");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2)){
        printf("not anagram\n");
        return 0;
    }
    for(i=0;str1[i]!='\0';i++){
        found=0;
        for(j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j]){
                found=1; 
                break;
            }
        }
        if(found==0){
            printf("not anagram\n");
            return 0;
        }
    }
    
    printf("anagram\n");
}