#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int freq[256]={0};
  int i;
  printf("enter a string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    freq[(unsigned char )str[i]]++;
  }
  printf("\ncharacter frequencies:\n");
  for(i=0;i<256;i++)
  {
    if(freq[i]>0)
    {
      printf("%c:%d\n",i,freq[i]);
    }
  }
}