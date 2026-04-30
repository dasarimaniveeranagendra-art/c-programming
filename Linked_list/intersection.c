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
node *intersection(node *head1,node* head2){
  if(head1==NULL ||head2==NULL) return NULL;
  node *temp1=head1,*temp2=head2;
  while(temp1!=temp2){
    temp1=temp1->next;
    temp2=temp2->next;
    if(temp1==temp2) return temp1;
    if(temp1==NULL) temp1=head2;
    if(temp2==NULL) temp2=head1;
  }
  return temp1;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("\n");
}
int main(){
 node *head1=createnode(10);
 head1->next=createnode(20);
 head1->next->next=createnode(30);
 head1->next->next->next=createnode(40);
 node *head2=createnode(15);
 head2->next=createnode(20);
 head2->next->next=createnode(35);
 head2->next->next->next=createnode(40);
 head2->next->next=head1->next->next;

 printf("list1:");
 printlist(head1);
 printf("list2:");
 printlist(head2);

 node *intersect=intersection(head1,head2);

 if(intersect){
  printf("intersect node with data:%d\n",intersect->data);
 }

 else{
  printf("no intersection points\n");
 }
}