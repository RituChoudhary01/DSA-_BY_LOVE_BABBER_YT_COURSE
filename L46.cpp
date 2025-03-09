
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
//Q1.Reverse a LL in k-groups
Node* kReverse(Node* head,int k){
    // bc
    if(head==NULL){
        return NULL;
    }
    // reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    while(curr!= NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // Recursion dek lega aage wala part
    if(next!= NULL){
        head->next = kReverse(next,k);
    }
    return prev;
}
// check LL is circular or not
bool isCircular(Node* head){
    if(head == NULL) return true;
    if(head->next==head) return true;
    Node* curr = head->next;
    while(curr){
        if(curr == head) return true;
        curr = curr->next;
    }
    return false;
}
// Print LL
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
    int K;
    cout<<"Enter the value of K: ";
    cin>>K;
    // printLL(head);
    cout<<endl;
     head = kReverse(head,K);
    printLL(head);
    cout<<endl;
    if(isCircular(head)){
        cout<<"LL is circular"<<endl;
    }
    if(!isCircular(head)){
        cout<<"LL is not circular"<<endl;
    }
    return 0;
}