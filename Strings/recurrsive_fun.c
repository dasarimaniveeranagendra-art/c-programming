#include<stdio.h>
#include<string.h>
int recfun(char str[],int i,int count)
{
  if(str[i]=='\0')
  {
    return count;
  }

  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
    count++;
  }
  return recfun(str,i+1,count);
}
int main()
{
  char str[20];
  printf("enter a string:");
  scanf("%s",str);
  int result=recfun(str,0,0);
  printf("vowels are :%d\n",result);
}