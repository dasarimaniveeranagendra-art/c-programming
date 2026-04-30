#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

Node* createNode(int data) {
    Node *temp = malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
/*============================INSERT NODE AT HEAD======================*/
Node *insert_at_head(Node *head,int data){
    Node *newNode=malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
    return head;
}
/*=======================INSERT NODE AT END===================================*/
Node *insert_at_end(Node *head,int data){
    Node *ptr=head;
    while(ptr->next){
        ptr=ptr->next;
    }
    Node *newNode=malloc(sizeof(Node));
    newNode->data=data;
    ptr->next=newNode;
    newNode->next=NULL;
    return head;
}
/*=====================INSERT NODE AT MIDDLE===========================*/
Node *insert_at_mid(Node *head,int data){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *slow=head,*fast=head;
    Node *newNode=malloc(sizeof(Node));
    newNode->data=data;
    while(fast && fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    newNode->next=slow->next;
    slow->next=newNode;
    return head;

}
/*==================DELETE NODE AT HEAD=============================*/
Node *del_at_head(Node *head){
    if(head==NULL){
        printf("List is empty.\n");
        return head;
    }
    Node *ptr=head;
    head=ptr->next;
    free(ptr);
    return head;

}

/*================DELETE NODE AT END=========================*/
Node *del_at_end(Node *head){
    if(head==NULL){
        return head;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    Node *ptr=head,*prev=NULL;
    while(ptr->next){
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=ptr->next;

    free(ptr);
    return head;
}

/*================DELETE NODE AT MIDDLE======================*/
Node *del_at_mid(Node *head){
    if(head==NULL ){
        return head;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    Node *slow=head,*fast=head,*prev=NULL;
    while(fast && fast->next && fast->next->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    free(slow);
    return head;

}
/*=====================MOVE FIRST NODE TO END=====================*/
Node *first_node_to_end(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *curr=head,*ptr=head;
    while(curr->next){
        curr = curr -> next;
    }
    head=ptr->next;
    ptr->next=NULL;
    curr->next=ptr;
    return head;
}
/*======================MOVE LAST NODE TO HEAD====================*/
Node *last_node_to_beg(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *curr=head,*prev=NULL;
    while(curr -> next){
        prev=curr;
        curr = curr->next; 
    }
    curr->next=head;
    head=curr;
    prev->next=NULL;
    return head;
}
Node * delete(Node *head,int data){
Node *p=head;
    if( p->data==data){
        head=p->next;
        free(p);
        return head;
    }
    else { 
        Node *ptr=head;
        while(ptr){
                if(ptr->next->data == data){
                    Node *temp=ptr->next;
                    ptr->next=temp->next;
                    free(temp);
                    return head;
                }
            ptr=ptr->next;
        }
    }
    
}
/*==================MOVE LARGEST ELEMENT TO END=======================*/
Node *largest_elemnet_to_end(Node *head){
    Node *prev=NULL,*curr=head,*maxprev=NULL,*maxnode=head;
    while(curr){
        if(maxnode->data < curr->data){
            maxnode = curr;
            maxprev=prev;
        }
        prev=curr;
        curr=curr->next;
    }
    if(maxnode->next == NULL){
        return head;
    }
    if(maxprev==NULL){
        head=maxnode->next;
    }
    else{
        maxprev ->next = maxnode->next;
    }

    Node *temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=maxnode;
    maxnode->next=NULL;
    return head;
}
/*======================MOVE SMALLEST ELEMENT TO HEAD========================*/
Node *smallest_elemnet_to_beg(Node *head){
    Node *prev=NULL,*curr=head,*minprev=NULL,*minnode=head;
    while(curr){
        if(minnode->data > curr->data){
            minnode = curr;
            minprev=prev;
        }
        prev=curr;
        curr=curr->next;
    }
    
    if(minprev==NULL){
        return head;
    }
    else {
        minprev->next=minnode->next;
        minnode->next=head;
        head=minnode;
    }
    return head;
}

/*=========================COPY LIST TO ANOTHER LIST===================*/
Node *copy_list(Node *head){
    if(head==NULL)
        return NULL;
    
    Node *newhead=NULL, *tail=NULL, *curr=head;
    while(curr){
        Node *newNode=createNode(curr->data);

        if(newhead==NULL){
            newhead=newNode;
            tail=newNode;
        }
        else {
            tail->next=newNode;
            tail=newNode;
        }
        curr = curr->next;
    }
    return newhead;
}
/*===================REVERSE LINKED LIST================*/
Node *reverse(Node *head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node *curr=head,*prev=NULL,*nextNode;
    while(curr){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

/*=================REVERSE UPTO PARTICULAR RANGE=================*/

Node *reverse_portion(Node *head,int left,int right){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *dummy=malloc(sizeof(Node));
    dummy->next=head;
    Node *ptr=dummy;
    for(int i=1;i<left;i++){
        ptr=ptr->next;
    }
    Node *curr=ptr->next;
    Node *nextNode=NULL;

    for(int i=0;i<right-left;i++){
        nextNode=curr->next;
        curr->next=nextNode->next;
        nextNode->next=ptr->next;
        ptr->next=nextNode;
    }
    Node *res=dummy->next;
    free(dummy);
    return res;
}

/*==============================PALLINDROME======================*/
void pallindrome(Node *head){
    if(head==NULL){
        printf("List is empty.\n");
        return;
    }

    Node *slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        
        fast=fast->next->next;
    }
    Node *first=head;
    Node *second=reverse(slow->next);
    Node *copy=second;
    slow->next=NULL;

    while(second){
        if(first->data != second->data){
            printf("Not pallindrome.\n");
            slow->next=reverse(copy);   // To restore original list
           return;

        }
        first=first->next;
        second=second->next;

    }
    printf("Pallindrom.\n");
    slow->next=reverse(copy);  // To restore original list
    

}
/*================================REMOVE DUPLICATES FROM SORTED LIST====================*/
Node *remove_dup(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *curr=head;
    while(curr && curr->next){
        if(curr->data == curr->next->data){
            Node *ptr=curr->next;
            curr->next=ptr->next;
            free(ptr);
        }
        else {
            curr=curr->next;
        }
    }
    return head;
}

/*===================REMOVE ALL DUPLICATES FROM LIST===============================*/

Node *remove_dup2(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    int freq[200]={0};
    Node *ptr=head;
    while(ptr){
        freq[ptr->data]++;
        ptr=ptr->next;
    }
    Node *prev=NULL,*curr=head;
    while(curr){
        if(freq[curr->data]>1){
            if(prev==NULL){
                Node *ptr=curr;
                head=curr=ptr->next;
                free(ptr);
            }
            else {
                Node *ptr=curr;
                prev->next=curr->next;
                curr=curr->next;
                free(ptr);

            }

        }
        else {
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}
/*======================ROTATE RIGHT BY K POSITIONS==================== */
Node *rotate_right(Node *head,int k){
    if(k==0 || head==NULL || head->next==NULL){
        return head;
    }
    int len=1;
    Node *ptr=head;
    while(ptr->next){
        len++;
        ptr=ptr->next;
    }
    ptr->next=head;
    k=k%len;
    if(k==0){
        ptr->next=NULL;
        return head;
    }

    int skip= len- k;

    Node *newHead=NULL;

    Node *prev=head;
    for(int i=1;i<skip;i++){
        prev=prev->next;
    }
    newHead=prev->next;
    prev->next=NULL;
    return newHead;
}
/*==================================ROTATE LEFT BY K POSITIONS====================*/
Node *rotate_left(Node *head,int k){
    if(k==0 || head==NULL || head->next==NULL){
        return head;
    }
    int len=1;
    Node *ptr=head;
    while(ptr->next){
        len++;
        ptr=ptr->next;
    }
    ptr->next=head;
    k=k%len;
    if(k==0){
        ptr->next=NULL;
        return head;
    }


    Node *newHead=NULL;

    Node *prev=head;
    for(int i=1;i<k;i++){
        prev=prev->next;
    }
    newHead=prev->next;
    prev->next=NULL;
    return newHead;
}

/*===============================REVERSE LIST FROM KTH POSITION==========================*/
Node *reverse_kth_position(Node *head,int k){
    if(head==NULL || head->next==NULL || k<=0){
        return head;
    }
    Node *dummy=malloc(sizeof(Node));
    dummy->next=head;
    Node *prev=dummy;
    for(int i=1;i<k&&prev->next!=NULL;i++){
        prev=prev->next;
    }
    //prev->next = reverse(prev->next);

    Node *curr=prev->next,*ptr=NULL,*nextNode;
    while(curr){
        nextNode=curr->next;
        curr->next=ptr;
        ptr=curr;
        curr=nextNode;
    }
    prev->next=ptr;
    Node *res=dummy->next;
    free(dummy);
    return res;
    
}

/*============================REORDER THE LIST====================*/

Node *reorder(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    
   
    Node *first=head;                   // DIVIDE LIST INTO SECOND HALF THIS IS FIRST HALF END
    

    Node *curr=slow->next,*prev=NULL,*nextNode;  // REVERSE SECOND HALF OF LIST
    slow->next=NULL;
    while(curr){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    Node *second=prev;

    
    Node *temp1,*temp2;
    while(second){
        temp1=first->next;
        temp2=second->next;

        first->next=second;
        second->next=temp1;

        first=temp1;
        second=temp2;
    }
    return head;
}

/*=======================REVERSE FIRST K POSITIONS==============*/
Node *reverse_first_k(Node *head,int k){
    if(head==NULL || head->next==NULL || k<=0){
        return head;
    }
    Node *curr=head;

    for(int i=1;i<k && curr->next !=NULL;i++){      // move from head to kth position
        curr=curr->next;
    }
    Node *nextpart=curr->next;      // second half strat(head)
    curr->next=NULL;

    Node *ptr=head,*prev=NULL,*nextNode;  // Reverse first half from head to kth position
    while(ptr){
        nextNode=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=nextNode;
    }
    head->next=nextpart;        // connect first half end with second half

    return prev;
}

/*===================INSERT NODE AT POSITION====================*/

Node *insert_at_pos(Node *head,int data,int pos){
    if(head==NULL || pos<=0){
        return head;
    }
    Node *curr=head;
    for(int i=1;i<pos-1;i++){
        curr=curr->next;
    }
    Node *newnode=malloc(sizeof(Node));
    newnode->data=data;

    if(pos==1){
        newnode->next=head;
        head=newnode;
        return head;
    }
    else {
        newnode->next=curr->next;
        curr->next=newnode;
    }
    return head;
}

/*======================DELETE NODE AT POSITION========================*/

Node *del_at_pos(Node *head,int pos){
    if(head==NULL || pos<=0){
        return head;
    }

    Node *curr=head,*prev=NULL;
    for(int i=1;i<pos;i++){
        prev=curr;
        curr=curr->next;
    }
    if(pos==1){
        head=curr->next;
        free(curr);
        return head;
    }
    else { 
    prev->next=curr->next;
    free(curr);
    }
    return head;
}

/*==========================SWAP NODE AT PAIRS(DATA)===================*/
Node *swap_node_pairs(Node *head){              // Swapping nodes by data
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *curr=head;
    while(curr && curr->next){
        int temp=curr->data;
        curr->data=curr->next->data;
        curr->next->data=temp;
        curr=curr->next->next;
    }
    return head;
}

/*=========================SWAP NODE AT PAIRS(LINK)======================*/
Node *swap_pairs(Node *head){           // Node swap by links
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *dummy=malloc(sizeof(Node));
    dummy->next=head;
    Node *prev=dummy;
    Node *curr=head;
    while(curr && curr->next){
        Node *first=curr;
        Node *second=curr->next;

        prev->next=second;
        first->next=second->next;
        second->next=first;

        prev=first;
        curr=first->next;
    }
    Node *newhead=dummy->next;
    free(dummy);
    return newhead;

}
/*==============================INTERSECTION NODE OF LISTS============================*/
Node *intersection(Node *head1,Node *head2){
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    Node *p1=head1;
    Node *p2=head2;

    while(p1 != p2){
        p1=(p1!=NULL)?p1->next:head2;
        p2=(p2!=NULL)?p2->next:head1;
    }
    //printf("Intersection point is: %d\n",p1->data);
    return p1;
}
/*===================REMOVE ALL OCCURENCES OF ELEMENT IN LIST===========================*/

Node *remove_node(Node *head,int val){
    if(head==NULL){
        return NULL;
    }
    if(head!=NULL && head->data==val){
        Node *temp=head;
        head=temp->next;
        free(temp);
    }
    Node *curr=head;
    Node *prev=NULL;
    while(curr && curr->next){
        if(curr->data == val){
            Node *temp=curr;
            curr=curr->next;
            prev->next=temp->next;
            free(temp);
        }
        else { 
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}

/*=========================LOOP CREATION====================*/
Node* loop_creation(Node *head,int pos){
    if(head == NULL || head->next == NULL|| pos<=0){
        return head;
    }
    int loop=1;
    Node *curr=head,*ptr=NULL;
    while(curr->next){
        if(loop == pos){
            ptr=curr;
        }
        loop++;
        curr=curr->next;
    }
    if(ptr!=NULL){ 
        curr->next=ptr;
        printf("\nLoop created successfully\n");
    }
    else {
        printf("\nFailed loop creation.\n");
    }
    return head;
}
/*=============================LOOP FINDING========================*/
void loop_detection(Node *head){
    if(head==NULL || head->next==NULL){
        printf("List is empty\n");
        return;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            printf("Loop found at node: %d\n",slow->data);
            return;
        }
    }
    printf("\nLoop not found.\n");
}
/*==========================LOOP REMOVAL===========================*/

Node *loop_removal(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            slow=head;
            while(slow != fast){
                slow=slow->next;
                fast=fast->next;
            }
            Node *ptr=slow;
            while(ptr->next != slow){
                ptr=ptr->next;
            }

            ptr->next=NULL;
            printf("\nLoop removed succesfully\n");
            return head;
        }
    }
    printf("\nLoop is not found.\n");
    return head;
}
/*======================REMOVE DUPLICATES FROM UNSORTED ARRAY=====================*/
Node *remove_dup_unsort(Node *head){
    if(head==NULL || head->next ==NULL){
        return head;
    }

    Node *curr=head;
    while(curr){
        Node *runner=curr;
        while(runner->next){
            if(curr->data == runner->next->data){
                Node *temp=runner->next;
                runner->next=temp->next;
                free(temp);
            }
            else {
                runner=runner->next;
            }
        }
        curr=curr->next;
    }
    return head;
}

/*====================REMOVE NTH NODE FROM THE END================*/

Node *remove_nth_node(Node *head,int pos){
    if(head==NULL || pos==0){
        return head;
    }
    int len=1;
    Node *curr=head;
    while(curr->next){
        len++;
        curr=curr->next;
    }
    int skip=len-pos;

    if(skip==0){
        Node *temp=head;
        head=temp->next;
        free(temp);
        return head;
    }

    Node *prev=head;
    for(int i=1;i<skip;i++){
        prev=prev->next;
    }

    Node *temp=prev->next;
    prev->next=temp->next;
    free(temp);
    return head;
}
/*====================DISPLAY LINKED LIST========================*/
void printList(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int choice;
    Node *head=NULL,*tail=NULL,*head1=NULL,*head2=NULL;
    int n,data,left,right,k,pos;
    while(1){ 
        
        printf("\n0. Exit.\n");
        printf("1. Create LinkedList.\n");
        printf("2. Print List.\n");
        printf("3. Insert node at head.\n");
        printf("4. Insert node at end.\n");
        printf("5. Insert node at mid.\n");
        printf("6. Delete npde at head.\n");
        printf("7. Delete node at end.\n");
        printf("8. Delete node at mid.\n");
        printf("9. Move last node to begining.\n");
        printf("10. Move first node to end.\n");
        printf("11. Move smallest element to begin.\n");
        printf("12. Move largest element to end.\n");
        printf("13. Copy list to another list.\n");
        printf("14. Reverse linked list:\n");
        printf("15. Reverse list praticular portion.\n");
        printf("16. Pallindrome or not.\n");
        printf("17. Remove duplicates from sorted list.\n");
        printf("18. Remove all duplicates from unsorted list.\n");
        printf("19. Rotate right by k positions.\n");
        printf("20. Rotate left by k positions.\n");
        printf("21. Reverse list from kth position.\n");
        printf("22. Reorder the list.\n");
        printf("23. Reverse first kth positions.\n");
        printf("24. Insert node at given positio,\n");
        printf("25. Delete node at position.\n");
        printf("26. Swap node of pairs(data).\n");
        printf("27. Seap nodes of pairs (link)\n");
        printf("28. intersection node of lists.\n");
        printf("29. Remove element from the list.\n");
        printf("30. Loop creation.\n");
        printf("31. Loop finding.\n");
        printf("32. Loop removal.\n");
        printf("33. Rmeove duplicates from unsorted list.\n");
        printf("34. Remove Nth node from end.\n");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){ 

            case 0:
                printf("Exit from code.\n");
                exit(1);
            
            case 1: 
                printf("\n\n===================Welcome to list creation.=====================\n\n");
                printf("Enter no of nodes: ");
                scanf("%d",&n);
                for(int i=1;i<=n;i++){
                    printf("Enter node %d data: ",i);
                    scanf("%d",&data);
                    Node *newNode=createNode(data);
                    if(head==NULL){
                        head=newNode;
                        tail=newNode;
                    }
                    else {
                        tail->next=newNode;
                        tail=newNode;
                    }
                }
                break;
            case 2:
                printf("\n\n=========================Welcome to Display List====================\n\n");
                printf("Liked List: ");
                printList(head);
                break;
            
            case 3:
                printf("\n\n===================Welcome to insert node at head=====================\n\n");
                printf("Enter data to insert at head: ");
                scanf("%d",&data);
                head=insert_at_head(head,data);
                printf("\nAfter insert node %d at head: ");
                printList(head);
                break;
            case 4:

                printf("\n\n============================Welcome to insert node at end====================\n\n");
                printf("Enter data to insert at end: ");
                scanf("%d",&data);
                head=insert_at_end(head,data);
                printf("\nAfter insert node at end: ");
                printList(head);
                break;

            case 5:
                printf("\n\n===============Welcome to insert node at middle.=======================\n\n");
                printf("Enter data to add at middle: ");
                scanf("%d",&data);
                head=insert_at_mid(head,data);
                printf("\nAfter insert node at middle: ");
                printList(head);
                break;
            
            case 6:
                printf("\n\n===================Welcome to Delete node at head.=====================\n\n");
                head=del_at_head(head);
                printf("\nAfter delete node at head: ");
                printList(head);
                break;
            case 7:
                printf("\n\n==================Welcome to delete node at end.==========================\n\n");
                head=del_at_end(head);
                printf("\nAfter delete node at end: ");
                printList(head);
                break;
            
            case 8:
                printf("\n\n=================Welcome to delete node at middle==========================\n\n");
                head=del_at_mid(head);
                printf("\nAfter delete node at middle: ");
                printList(head);
                break;

            case 9:
                printf("\n\n=====================Welcome to Move lastnode to beggining==================\n\n");
                head=last_node_to_beg(head);
                printf("\nAfter Move last node to head: ");
                printList(head);
                break;

            case 10:
                printf("\n\n==================Welcome to move first node to end==========================\n\n");
                head=first_node_to_end(head);
                printf("\nAfter moce First node to end: ");
                printList(head);
                break;
            
            case 11:
                printf("\n\n=============welcome to move smallest element to head=======================\n\n");

                head=smallest_elemnet_to_beg(head);
                printf("\nSmallest element move to head: ");
                printList(head);
                break;

            case 12:

                printf("\n\n=================Welcome to move largest eelement to end===================\n\n");
                head=largest_elemnet_to_end(head);
                printf("\nAfter move Largest element to end: ");
                printList(head);
                break;
            
            case 13: 
                printf("\n\n================Welcome to copy list to another list.====================\n\n");

                head=copy_list(head);
                printf("\nAfter Copy list to another list: ");
                printList(head);
                break;
            case 14:
                printf("\n\n================Welcome to reverse list========================\n\n");
                head=reverse(head);
                printf("\nAfter reverse list: ");
                printList(head);
                break;
                
            case 15:
                printf("\n\n=================Welcome to reverse upto particular range=============\n\n");
                printf("\nEnter range(left - right) values: ");
                scanf("%d %d",&left,&right);
                head=reverse_portion(head,left,right);
                printf("\nAfter reverse list from %d to %d: ",left,right);
                printList(head);
                break;
            case 16:
                
                printf("\n\n=================Welcome to Pallindrome==================\n\n");
                pallindrome(head);
                break;
            case 17:
                printf("\n\n================Welcome to Remove Duplicates=================\n\n");
                head=remove_dup(head);
                printf("\nAfter Remove duplicates from list: ");
                printList(head);
                break;
            case 18:
                printf("\n\n===============Welcome to Remove Duplicates II=======================\n\n");
                head=remove_dup2(head);
                printf("\nAfter Remove all duplicates from list: ");
                printList(head);
                break;
            case 19:
                printf("\n\n=================Welcome to Rotate right=========================\n\n");
                printf("\nEnter positions to Rotate right: ");
                scanf("%d",&k);
                head=rotate_right(head,k);
                printf("\nAfter Right rotate by %d positions: ",k);
                printList(head);
                break;
            case 20: 
                printf("\n\n=================Welcome to Left right=========================\n\n");
                printf("\nEnter positions to Rotate Left: ");
                scanf("%d",&k);
                head=rotate_right(head,k);
                printf("\nAfter Left rotate by %d positions: ",k);
                printList(head);
                break;
            case 21:
                printf("\n\n==================Welcome to reverse list from kth position================\n\n");
                printf("Enter Position number: ");
                scanf("%d",&k);
                head=reverse_kth_position(head,k);
                printf("\nAfter reverse list from %dth position: ",k);
                printList(head);
                break;
            case 22:
                printf("\n\n=====================Welcome to Reorder the list.============================\n\n");
                head=reorder(head);
                printf("\nAfter reorder the list: ");
                printList(head);
                break;
            case 23:
                printf("\n\n=======================Welcome to Reverse first kth positions=================\n\n");
                printf("\nEnter positions to reverse: ");
                scanf("%d",&k);
                head=reverse_first_k(head,k);
                printf("\nAfter reverse first %dth positions: ");
                printList(head);
                break;
            case 24: 
                printf("\n\n======================Welcome to add node at position=====================\n\n");
                printf("\nEnter data to add: ");
                scanf("%d",&data);
                printf("Enter position: ");
                scanf("%d",&pos);
                head=insert_at_pos(head,data,pos);
                printf("\nAfter insert node At %dth position: ");
                printList(head);
                break;
            case 25:
                printf("\n\n=======================Welcome to delete node at given positions==========================\n\n");
                printf("\nEnter position to delete: ");
                scanf("%d",&pos);
                head=del_at_pos(head,pos);
                printf("\nAfter delete node at %dth position: ",pos);
                printList(head);
                break;

            case 26:
                printf("\n\n=======================Welcome to swap nodes in pairs by data=======================\n\n");
                head=swap_node_pairs(head);
                printf("\nAfter swap nodes by data: ");
                printList(head);
                break;
            case 27:
                printf("\n\n========================Welcome to swap nodes in pairs by link======================\n\n");
                head=swap_pairs(head);
                printf("\nAfter swap nodes by link: ");
                printList(head);
                break;
            case 28:
                printf("\n\n=========================Welcome to intersection of lists============================\n\n");
                Node *isert=intersection(head1,head2);
                printf("Intersection node: %d\n",isert->data);
                break;

            case 29:
                printf("\n\n=========================Welcome to remove given element from list====================\n\n");
                printf("\nEnter data to remove: ");
                scanf("%d",&data);
                head=remove_node(head,data);
                printf("\nAfter remove %d node from list: ");
                printList(head);
                break;
            case 30:
                printf("\n\n===========================Welcome to loop creation============================\n\n");
                printf("Enter node to create loop: ");
                scanf("%d",&k);
                head=loop_creation(head,k);
                //printList(head);
                break;
            case 31:
                printf("\n\n================Welcome to loop finding===========================\n\n");
                loop_detection(head);
                break;
            case 32:
                printf("\n\n===================Welcome to loop removal======================\n\n");
                head=loop_removal(head);
                printf("\nAfter remove loop: ");
                printList(head);
                break;
            case 33:
                printf("\n\n=====================Welcome to remove duplicates from unsorted array=================\n\n");
                head=remove_dup_unsort(head);
                printf("\nAfter remove duplicates from unsorted list: ");
                printList(head);
                break;
            case 34:
                printf("\n\n=====================Welocome to remove nth node from end============================\n\n");
                printf("Enter position from end: ");
                scanf("%d",&pos);
                head=remove_nth_node(head,pos);
                printf("\nAfter remove %dth node from end: ",pos);
                printList(head);
                break;

        }
    }

    
}