#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int freq[256]={0};
  int i;
  char max=0;
  char ch;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    freq[str[i]]++;
  }
  printf("frequency of character:\n");
  for(i=0;i<256;i++)
  {
    if(freq[i]>0)
    {
       printf("%c:%d\n",i,freq[i]);
    }
  }
  for(i=0;i<256;i++)
  {
    if(freq[i]>max)
    {
      max=freq[i];
      ch=i;
    }
  }
  printf("highest character %c occurs %d times\n",ch,max);
}