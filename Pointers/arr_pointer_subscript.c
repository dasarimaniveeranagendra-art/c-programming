#include<stdio.h>
int main()
{
  int arr[5]={10,20,30,40,50};
  int i;
  int *ptr=arr;
  printf("using subscript notation:\n");
  for(i=0;i<5;i++)
  {
    printf("arr[%d]=%d\n",i,arr[i]);
  }
  printf("\nusing pointer notation:\n");
  for(i=0;i<5;i++)
  {
    printf("*(ptr+%d)=%d\n",i,*(ptr+1));
  }
}