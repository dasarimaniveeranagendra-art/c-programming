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
void sort012(node *head){
  if(!head||!head->next) return;
  int count[3]={0};
  node *temp=head;
  while(temp){
    count[temp->data]++;
    temp=temp->next;
  }
  temp=head;
  int i=0;
  while(temp){
    if(count[i]==0){
      i++;
    }
    else{
      temp->data=i;
      count[i]--;
      temp=temp->next;
    }
  }
  //return;
}
void printlist(node *head){
  while(head!=NULL){
    printf("%d->",head->data);
    head=head->next;
  }
  printf("NULL\n");
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

  printf("after segregation:");
  sort012(head);
  printlist(head);
}