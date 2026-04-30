#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *createnode(int data){
    node *new=malloc(sizeof(node));
    if(new==NULL){
        printf("memory failed");
        return new;
    }
    new->data=data;
    new->next=NULL;
    return new;
}
node *del_nth_node(node *head,int k)
{
    int len=0;
    node *curr=head;
    while(curr){
        len++;
        curr=curr->next;
    }
    int skip=len-k;
    if(skip==0){
        node *ptr1=head;
        head=head->next;
        free(ptr1);
        return head;
    }
    node *ptr=head;
    for(int i=1;i<skip;i++){
        ptr=ptr->next;
    }
    node *temp=ptr->next;
    ptr->next=temp->next;
    free(temp);
    return head;
}
void printlist(node *head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL");
}
int main(){
    int i,data,n,k;
    node *head=NULL,*tail=NULL;
    printf("enter no.of node:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter %d data :",i+1);
        scanf("%d",&data);
        node *newNode=createnode(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    printlist(head);
    
    printf("\nenter nth node to delete:");
    scanf("%d",&k);
    head=del_nth_node(head,k);
    printlist(head);
    printf("\n");
}