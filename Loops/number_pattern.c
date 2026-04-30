//left triangle
#include<stdio.h>
int main()
{
  int num,i,j;
  printf("how many rows u want to print:");
  scanf("%d",&num);
  /*for(i=1;i<=num;i++)
  {
    for(j=1;j<=num;j++)
    {
      //if(j<=i)//left triangle
      if(j>=i)//inverted right triangle.
      {
        printf("%d",j);
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }*/


//diamond pattern of pyramid.
//upper half of pyramid.
  for(i=1;i<=num;i++)
  {
    for(j=1;j<=2*num-1;j++)
    {
      if(j>=num-(i-1)&&j<=num+(i-1))
      {
        printf("%d",j);
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  //lower half of pyramid.
  for(i=num-1;i>=1;i--)
  {
    for(j=1;j<=2*num-1;j++)
    {
      if(j>=num-(i-1)&&j<=num+(i-1))
      {
        printf("%d",j);
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}