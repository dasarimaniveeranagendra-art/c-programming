#include<stdio.h>
int main(){
    int n,i;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    int large;
    printf("enter data:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    printf("second largest:");
    for(i=1;i<n;i++)
    {
        if(arr[i]>large){
            large=arr[i];
        }
        
    }
    int seclar=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>seclar && seclar<large){
            seclar=arr[i];
        }
    }
    printf("%d",seclar);
    printf("\n");
    
}
