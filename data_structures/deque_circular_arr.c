#include<stdio.h>
#include<stdlib.h>
#define N 5
int deque[N];
int f=-1,r=-1;
void enqueue_front(){
  int x;
  if((f==0 && r==N-1)||(f==r+1)){
    printf("queue if full\n");
    return;
  }
  printf("enter enqueue of front:");
  scanf("%d",&x);
  if((f==-1 && r==-1)||(f==r+1)){
    f=r=0;
    deque[f]=x;
  }
  else if(f==0){
    f=N-1;
    deque[f]=x;
  }
  else{
    deque[--f]=x;
  }
}
void enqueue_rear(){
  int y;
  if((f==0 &&r==N-1)||(f==r+1)){
    printf("queue id full\n");
  }
  printf("enter enqueue at rear:");
  scanf("%d",&y);
  if(f==-1 && r==-1){
    f=r=0;
    deque[r]=y;
  }
  else if(r==N-1){
    r=0;
    deque[r]=y;
  }
  else{
    deque[++r]=y;
  }
}
void dequeue_front(){
  if(f==-1 && r==-1){
    printf("list is empty\n");
  }
  else if(f==r){
    f=r=-1;
  }
  else if(f==N-1){
    printf("dequed element is:%d\n",deque[f]);
    f=0;
  }
  else{
    printf("dequed element is:%d\n",deque[f]);
    f++;
  }
}
void dequeue_rear(){
  if(f==-1 && r==-1){
    printf("list is empty\n");
  }
  else if(f==r){
    f=r=-1;
  }
  else if(r==0){
    printf("dequed of rear element is:%d\n",deque[r]);
    r=N-1;
  }
  else{
    printf("dequed element is:%d\n",deque[r]);
    r--;
  }

}
void display(){
  int i;
  if(f==-1 && r==-1){
    printf("deque is empty\n");
    return;
  }
  i=f;
  while(i!=r){
    printf("%d",deque[i]);
    i=(i+1)%N;
  }
  printf("%d",deque[r]);
}
void get_front(){
  if(f==-1){
    printf("deque is empty\n");
    return;
  }
  printf("%d",deque[f]);
}
void get_rear(){
  if(f==-1)
  {
    printf("deque is empty\n");
    return;
  }
  printf("Rear:%d",deque[r]);
}


int main(){
  int n;
  while(1){
    printf("enter choice:\n1.enqueue front\n2.enqueue rear\n3.dequeue front\n4.dequeue rear\n5.display\n6.get front\n7.get rear\n");
    scanf("%d",&n);
    switch(n){
      case 1: enqueue_front();
      break;

      case 2: enqueue_rear();
      break;

      case 3:dequeue_front();
      break;

      case 4: dequeue_rear();
      break;

      case 5:display();
      break;

      case 6:get_front();
      break;

      case 7:get_rear();
      break;

      case 8:exit(0);

      default:printf("invalid case\n");
    }
  }
}
