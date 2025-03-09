#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
/*
//Q1. Sort 0's 1's 2's in LL
// Approach 1
Node* sortList(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else twoCount++;

        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else{
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}
// Approach 2
void insertAtTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sortLL(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = zeroHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = zeroHead;
    Node* curr = head;
    // create saparate list 0s,1s,2s
    while(curr != NULL){
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail,curr);
        }
        else if(value == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }
    // merge 3 LL
    // 1s list not empty
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        // 1s list->empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    // setup Head
    head = zeroHead->next;
    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;
}
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    int n,d;
    cout<<"Enter the size of LL: "<<endl;
    cin>>n;
    Node* head = NULL,*tail = NULL;
    while(n--){
        cin>>d;
        Node* newNode = new Node(d);
        if(head==NULL){
         head = newNode;
         tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    // printLL(head);
    cout<<"LL after sorted:"<<endl;
    head = sortList(head);
    printLL(head);
    return 0;
}
*/

// Q2.Merge 2 sorted Linked List
Node* solve(Node* head1,Node* head2){
    // 
   
    if(head1->next == NULL){
        head1->next = head2;
        return head1;
    }
  Node* curr1 = head1;
  Node* next1 = curr1->next;
  Node* curr2 = head2;
  Node* next2 = curr2->next;
  while(next1!=NULL && curr2!=NULL){
    if( (curr2->data >= curr1->data)&&
    (curr2->data <= next1->data)){
        // add node in between the first list
        curr1->next = curr2;
        next2 = curr2->next;
        curr2->next = next1;
        curr1 = curr2;
        curr2 = next2;
    }
    else{
        // curr1 and next1 ko aage badhana padega
        curr1 = next1;
        next1 = next1->next;
        if(next1 == NULL){
            curr1->next = curr2;
            return head1;
        }
    }
  } 
  return head1; 
}
Node* mergeTwoList(Node* head1,Node* head2){
    if(head1==NULL && head2==NULL)
    return NULL;
    if(head1==NULL) 
    return head2;
    if(head2==NULL) 
    return head1;
    if(head1->data <= head2->data){
        return solve(head1,head2);
    }
    else{
        return solve(head2,head1);
    }
    // this naver be return 
    return head1;
}

void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    int n1,d1;
    cout<<"Enter the size of first LL: "<<endl;
    cin>>n1;
    Node* head1 = NULL,*tail1 = NULL;
    while(n1--){
        cin>>d1;
        Node* newNode = new Node(d1);
        if(head1==NULL){
         head1 = newNode;
         tail1 = newNode;
        }
        else{
            tail1->next = newNode;
            tail1 = newNode;
        }
    }
   
    int n2,d2;
    cout<<"Enter the size of second LL: "<<endl;
    cin>>n2;
    Node* head2 = NULL,*tail2 = NULL;
    while(n2--){
        cin>>d2;
        Node* newNode = new Node(d2);
        if(head2==NULL){
         head2 = newNode;
         tail2 = newNode;
        }
        else{
            tail2->next = newNode;
            tail2 = newNode;
        }
    }
    
   head1 = mergeTwoList(head1,head2);
    printLL(head1);
    return 0;
}
