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
node *rev_1st_kthpos(node *head,int k){
    if(head==NULL ||k==0){
        return head;
    }
    node *curr=head,*prev=NULL,*next=NULL;
    int count=0;
    while(curr!=NULL && count<k){
      next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
      count++;
    }
    head->next=curr;
    return prev;
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
    int n,i,data,k;
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
    printf("enter 1st kth pos:");
    scanf("%d",&k);
    head=rev_1st_kthpos(head,k);
    printf("after updating list:");
    printlist(head);
    
}