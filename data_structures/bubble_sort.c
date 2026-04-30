#include<stdio.h>
int main()
{
  int arr[10]={5,3,4,1,2,6};
  int flag;
  int i,j,temp;
  for(i=0;i<6-1;i++)
  {
    //flag=0;
    for(j=0;j<6-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        //flag=1;
      }
    }
    //if(flag==0)
    //{
     // break;
    //}
  }
  printf("after sorting:\n");
  for(i=0;i<6;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}