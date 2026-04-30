#include<stdio.h>
#include<string.h>
int main()
{
  char str[20],ch;
  int i,j,n,count;
  printf("enter a string:");
  scanf("%s",str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    ch=str[i];
    if(ch!=' ')
    {
      count=0;
      for(j=0;j<n;j++)
      {
        if(ch==str[j])
        {
          count++;
          str[j]=' ';
        }
      }
      printf("%c occurs %d times\n",ch,count);
    }
    
  }
}