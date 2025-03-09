/*
//Q1.Reverse a LL
#include<iostream>
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

// reverse using iterative
Node* reverseIter(Node* head){
    if(head==NULL||head->next==NULL) 
    return head;
    Node* curr = head;
    Node* prev = NULL;
    Node* nxt;
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
// reverse using recursion
Node* reverseRec(Node* head){
    // b.c
    if(head == NULL || head->next == NULL)
    return head;
    Node* reverseHead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return reverseHead;
}
// Print LL
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
// Q2. Middle Node of LL
int getLen(Node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node* findMiddle(Node* head){
    int len = getLen(head);
    Node* curr = head;
    int ans = (len/2);
    while(--ans){
     curr = curr->next;
    }
    if(len&1){
        return curr->next;
    }
    return curr;
}
// find middle Node expect approach
Node* getMiddle(Node* head){
    if(head==NULL||head->next == NULL) 
    return head;
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
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
    printLL(head);
    cout<<endl;
    // head = reverseIter(head);
    // printLL(head);
    // cout<<endl;
    // head = reverseRec(head);
    // printLL(head);
    // cout<<findMiddle(head)->data<<endl;
    cout<<getMiddle(head)->data<<endl;
    return 0;
}
*/
//Q1. H.W reverse a doubly LL
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int data){
    this->data = data;
    next = NULL;
    prev = NULL;
    }
};
Node* reverseRec(Node* head){
    if(head==NULL) 
    return NULL;
    // swap the links
    Node* temp = head->prev;
    head->prev = head->next;
    head->next = temp;

    if(head->prev == NULL){
        return head;
    }
    return reverseRec(head->prev);
}

Node* reverse(Node* head){
    if(head == NULL || head->next == NULL)
    return head;
    Node* prevNode = NULL;
    Node* currNode = head;
    while(currNode != NULL){
        prevNode = currNode->prev;
        currNode->prev = currNode->next;
        currNode->next = prevNode;
        currNode = currNode->prev;
    }
    return  prevNode->prev;
}
void printList(Node *head){
    while(head != NULL){
     cout<<head->data<<" ";
     head = head->next;
    }
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;

    cout << "Original LL" << endl;
    printList(head);
    // head = reverseRec(head);
    head = reverse(head);
    cout << "\nReversed LL" << endl;
    printList(head);
    return 0;
}