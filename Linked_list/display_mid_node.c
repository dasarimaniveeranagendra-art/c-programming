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
void mid_num(node *head){
    node *fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("mid node is :%d\n",slow->data);
    node *prev=head,*temp=NULL;
    while(prev->next!=slow){
        temp=prev;
        prev=prev->next;   
        
    }
    temp->next=slow;
    free(prev);
    return;    
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
    mid_num(head);

    printlist(head);
    
    
}