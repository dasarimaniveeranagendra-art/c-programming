#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *createnode(int data){
    node *new=malloc(sizeof(node));
    if(new==NULL){
        printf("memory error");
        return new;
    }
    new->data=data;
    new->next=NULL;
    return new;
}
node *node_rev(node *head){
    if(head==NULL ||head->next==NULL){
        return head;
    }
    node *curr=head,*prev=NULL,*next=head;
    while(next!=NULL){
      next=next->next;
      curr->next=prev;
      prev=curr;
      curr=next;
    }
    head=prev;
    return head;
}
void printlist(node *head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("\n");
}
int main(){
    node *head=NULL,*tail=NULL;
    int n,i,data,prev;
    printf("no.of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter %d data:",i+1);
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
    
    head=node_rev(head);
    printf("after updating list:");
    printlist(head);
    
}