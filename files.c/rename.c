#include<stdio.h>
int main()
{
  char old_name[]="oldfile.txt";
  char new_name[]="newfile.txt";
  yf(rename(old_name,new_name)==0)
  {
    printf("file renamed successfully\n");
  }
  else{
    printf("error remaining file\n");
  }
  return 0;
}