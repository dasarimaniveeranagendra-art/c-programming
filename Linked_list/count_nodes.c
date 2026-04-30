#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *createnode(int data){
    node *head,*ptrav;
    node *new=malloc(sizeof(node));
    if(new==NULL){
        printf("memory error ");
        return NULL;
    }
    new->data=data;
    new->next=NULL;
    return new;
}
int countnodes(node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count; 
   
}
void printlist(node *head){
    
    while(head!=NULL){
        
        printf("%d->",head->data);
        head=head->next;
        
    }
    printf("NULL\n");
   
    
}
int main(){
    int i,n,data;
    node *head=NULL,*tail=NULL;
    printf("enter no.of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter data:");
        scanf("%d",&data);
        node *newnode=createnode(data);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    printlist(head);
    
    printf("total no.of nodes:%d",countnodes(head));
    
}