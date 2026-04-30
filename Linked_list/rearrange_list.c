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
node *rev(node *head){
    node *curr=head,*prev=NULL,*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void rearr(node *head){
    node *fast=head,*slow=head;
    while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node *second=rev(slow->next);
    slow->next=NULL;
    node *first=head,*temp;
    while(second!=NULL){
        temp=first->next;
        first->next=second;
        first=temp;
        temp=second->next;
        second->next=first;
        second=temp;
    }
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
    printf("original list:");
    printlist(head);
  
    rearr(head);
    printf("after rearraging list:");

    printlist(head);
    
}