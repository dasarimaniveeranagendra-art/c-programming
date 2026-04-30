#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct date{
  int day;
  int month;
  int year;
};
int isleapyear(int year)
{
  if((year %4 ==0 && year % 100!=0)||(year %400==0))
    return 1;
  else
    return 0;
}
int main()
{
  struct date today;
  today.day=16;
  today.month=10;
  today.year=2024;
  printf("Date: %02d-%02d-%d\n",today.day,today.month,today.year);
  if(isleapyear(today.year))
  {
    printf("%d is a leap year\n",today.year);

  }
  else{
    printf("%d is not a leap year\n",today.year);
  }
}