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
node *rev_grp_k(node *head,int k){
    node *curr=head,*prev=NULL,*next=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=rev_grp_k(next,k);
    }
    return prev;
}

void printlist(node *head){
    
    while(head!=NULL){
        
        printf("%d->",head->data);
        head=head->next;
        
    }
    printf("NULL\n");
   
    
}
int main(){
    int i,n,data,k;
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
    printf("enter k value:");
    scanf("%d",&k);
    head=rev_grp_k(head,k);
    printf("after reversing in group:");
    printlist(head);
    
}