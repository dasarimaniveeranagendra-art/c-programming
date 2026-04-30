/*#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10]="Bangalore";
  char str2[10]="Mangalore";
  mystrcmp(str1,str2);
  printf("%d\n",mystrcmp(str1,str2));
}
mystrcmp(char s1[],char s2[])
{
  int i=0;
  while(s1[i]==s2[i])
  {
    if(s1[i]=='\0')
    {
      return 0;
    }
    i++;
  }
  return s2[i]-s1[i];
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[10];
  char str2[10]="Linux";
  strcpy(str1,str2);
  //astrcpy(str1,"Linux");
  printf("cpied string is:%s\n",str1);
}
astrcpy(char arr1[],char arr2[])
{
  int i=0;
  while((arr1[i]==arr2[i])!='\0')
  {
    i++;
  }
  return arr1;
}