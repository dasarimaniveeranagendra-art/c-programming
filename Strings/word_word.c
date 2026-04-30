#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,j;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  int n=strlen(str);
  for(i=0,j=n-1;i<j;i++,j--)
  {
      char temp=str[i];
      str[i]=str[j];
      str[j]=temp;
  }
  int start=0;
  for(i=0;i<=n;i++)
  {
    if(str[i]==' ' || str[i]=='\0')
    {  
      j=i-1;
      while(start<j)
      {
        char temp=str[start];
        str[start]=str[j];
        str[j]=temp;
        start++;
        j--;
      }
      start=i+1;
    }  
  }
  printf("after reversing string:%s\n",str);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  char *arr[30];
  int i=0;
  printf("enter a string:");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")]='\0';
  char *token=strtok(str," ");
  while(token!=NULL)
  {
    arr[i]=token;
    i++;
    token=strtok(NULL," ");
  }
  for(int j=i-1;j>=0;j--)
  {
    printf("%s ",arr[j]);
  }
  printf("\n");
}*/