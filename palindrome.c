#include<stdio.h>
#include<string.h>
int main()
{
  char str[10];
  int i,j,n,flag=0;
  n=strlen(str);
  printf("enter a palindrome:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    if(str[i]!=str[n-i-1])
    {
      flag=1;
      break;
    }
  }
  if(flag)
  {
    printf("%s it is  not palindrome\n",str);
  }
  else
  {
    printf("%s it is palindrome\n",str);
  }
}