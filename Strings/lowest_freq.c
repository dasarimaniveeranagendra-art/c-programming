#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int freq[256]={0};
  int i;
  char ch;
  int mini=100;
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
      printf("%C - %d\n",i,freq[i]);
    }
  }
  for(i=0;i<256;i++)
  {
    if(freq[i]>0 && freq[i]<mini)
    {
      mini=freq[i];
      ch=i;
    }
  }
  printf("lowest frequency of character %c occurs %d times\n",ch,mini);
}