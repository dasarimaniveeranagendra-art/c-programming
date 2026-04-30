#include<stdio.h>
#include<string.h>
void rev(char* str);
int main()
{
  char str[10]="Linux";
  rev(str);
}
void rev(char *sptr)
{
  int n;
  n=strlen(sptr);
  for(int i=0,j=n-1;i<j;i++,j--)
  {
    int temp=sptr[i];
    sptr[i]=sptr[j];
    sptr[j]=temp;
    
  }
  printf("string reverse is:%s\n",sptr);
}
  
 