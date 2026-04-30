#include<stdio.h>
int main()
{
  int n,i,j;
  printf("how many rows u want to print:");
  scanf("%d",&n);
 // printf("enetr symbol:");
  /*for(i=1;i<=n;i++)
  {
    //for(j=1;j<=n;j++)//square pattern.
    //for(j=1;j<=2*n-1;j++)//pyramid pattern.
    for(j=1;j<=2*n-i-1;j++)//inverted pyramid.
    {
      //if(j>=n-(i-1)&&j<=n+(i-1))//pyramid.
      //if(j<=i)//triangle.
      if(j<=i)//inverted pyramid.
      {
        printf(" ");
      }
      else{
        printf("*");
      }
    }
    printf("\n");
  }*/

 //mirror right triangle.
 /*for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
    if(j<=i)
    {
      printf("*");
    }
    else{
      printf(" ");
    }
  }
  printf("\n");
 }*/

 //star matrix with left-right diagonals spaces(or)square star pattern with diagonals removed.
  /*for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j!=i)
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  } */



  //right triangle.
  /*for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j>n-i)
      {
        printf(" ");//mirror left triangle.
        //printf("*");
      }
      else{
        printf("*");//mirror left triangle.
        //printf(" ");
      }
    }
    printf("\n");
  }*/


  //diamond pattern.
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*n-1;j++)
    {
      //upper pattern.
      if(j>=n-(i-1)&&j<=n+(i-1))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=2*n-1;j++)
    {
      if (j>=n-(i-1)&&j<=n+(i-1))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}




