#include<stdio.h>
#include<string.h>
int recpalindrome(char word[],int i,int j)
{
  if(i>=j)
  {
    return 1;
  }
  if(word[i]!=word[j])
  {
    return 0;
  }
  return recpalindrome(word,i+1,j-1);
}
int main()
{
  char str[30];
 
  printf("enter a string:");
  scanf("%s",str);
  int len=strlen(str);
  if(recpalindrome(str,0,len-1))
  {
    printf("it is palindrome\n");
  }
  else{
    printf("it is not palindrome\n");
  }
}