#include<stdio.h>
#include<string.h>
int main()
{
  char str[5][30]={"banana","apple","dragonfruit","cherry","grapes"};
  int i,j;
  char temp[20];
  for(i=0;i<5-1;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(strcmp(str[i],str[j])>0)
      {
        strcpy(temp,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],temp);
      }
    }
  }
  printf("string array of ascending order:\n");
  for(i=0;i<5;i++)
  {
    printf("%s\n",str[i]);
  }
}