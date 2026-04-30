#include<stdio.h>
#define size 10
int main()
{
  int arr[size];
  int i,even=0,odd=0;
  for(i=0;i<size;i++)
  {
    printf("engter the values for arr[%d]:",i);
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  printf("even num=%d, odd num=%d\n",even,odd);
}