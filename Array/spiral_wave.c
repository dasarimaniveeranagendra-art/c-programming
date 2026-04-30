#include<stdio.h>
#define row 3
#define col 3
int main(){
  int arr[row][col];
  int i,j;
  printf("enter (%dx%d) matrix:",row,col);
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("spiral wave:\n");
  for(j=0;j<col;j++){
    if(j%2==0){
      for(i=0;i<row;i++){
        printf("%d->",arr[i][j]);
      }
    }
    else{
      for(i=row-1;i>=0;i--){
        printf("%d->",arr[i][j]);
      }
    }
  }
}