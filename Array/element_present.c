#include<stdio.h>
int main()
{
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr[0]);
  int i,key,found=0;
  printf("enter element u want to search:");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
      found=1;
      printf("element %d found at:%d\n",key,i);
      break;
    }
  }
  if(!found)
  {
    printf("element %d not found\n",key);
  }

}