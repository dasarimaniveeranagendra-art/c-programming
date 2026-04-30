#include<stdio.h>
int main()
{
  int arr[5]={10,21,22,25,30};
  int *ptr=arr;
  int i;
  int mini=*ptr;
  int max=*ptr;
  for(i=0;i<5;i++)
  {
    if(*(ptr+i)<mini)
    {
      mini=*(ptr+i);
    }
    if(*(ptr+i)>max)
    {
      max=*(ptr+i);
    }
  }
  printf("mini=%d\n",mini);
  printf("max=%d\n",max);

}