/*#include<stdio.h>
#include<string.h>
int recrev(char str[],int i,int j,int n,char temp)
{
  n=strlen(str);
  if(i>=j)
  {
    return 0;
  }
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  recrev(str,i+1,j-1,n,temp);
   
}
int main()
{
  char str[30];
  int i,j;
  char temp;
  printf("enter a string:");
  scanf("%s",str);
  j=strlen(str)-1;
  recrev(str,i,j,0,temp);
  printf("after reversing a strind:%s\n",str);
}*/

#include<stdio.h>
int main(){
    char str[]="Linux";
    char temp;
    int i=0,j;
    while(str[i]!='\0'){
        i++;
    }
    for(j=0;j<i/2;j++){
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    printf("%s\n",str);
}