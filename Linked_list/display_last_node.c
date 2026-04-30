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
void last_node(node *head){
    node *curr=head;
    if(head==NULL|| head->next==NULL){
        return;
    }
    while(curr->next!=NULL){
        curr=curr->next;
        
    }
    printf("last node is:%d",curr->data);
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
    node *curr;
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
    last_node(head);
    
    
}