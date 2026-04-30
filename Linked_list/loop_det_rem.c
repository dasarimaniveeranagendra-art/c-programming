#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *create(int data){
    
    node *new=malloc(sizeof(node));
    if(new==NULL){
        printf("memory failed");
        return NULL;
    }
    new->data=data;
    new->next=NULL;
    return new;
}
void loop_detect(node *head){
    node *fast=head,*slow=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            printf("loop detected\n");
            return;
        }
        
    }
    printf("loop not detected");
    
}
void loop_rem(node *head){
    node *fast=head,*slow=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            fast->next=NULL;
            printf("loop removed\n");
        }
    }
    printf("loop not detected\n");
    
}
void printlist(node *head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL");
}
int main(){
    node *head=create(10);
    head->next=create(20);
    head->next->next=create(30);
    head->next->next->next=create(40);
    head->next->next->next->next=head->next;
    
    loop_detect(head);
    loop_rem(head);
}