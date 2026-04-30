#include<stdio.h>
int main()
{
  int arr[]={10,21,22,14,24};
  int *ptr=arr;
  int i,data,found=0;
  printf("enter element u want to search:");
  scanf("%d",&data);
  for(i=0;i<*(ptr+i);i++)
  {
    if(*(ptr+i)==data)
    {
      printf("element found at index:%d\n",i);
      found=1;
      break;
    }
  }
  if(found==0)
  {
    printf("element not found\n");
  }
}