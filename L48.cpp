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
//Q1.Remove Duplicates from sorted LL
Node* removeDuplicates(Node* &head){
  if(head==NULL || head->next==NULL) return head;
    Node* curr = head->next;
    Node* prev = head;
    while(curr){
    if(prev->data == curr->data){
        Node* del = curr;
        curr = curr->next;
        prev->next = curr;
        del->next = NULL;
        delete del;
    }
    else{
        prev = prev->next;
        curr = curr->next;
    }

    }
    return head;
}
// Q2.Remove from unsorted LL
Node* removeDuplicatesFromUnSortedLL(Node* head){
 if(head==NULL||head->next == NULL) return head;
 unordered_map<int,int>mp;
 Node* newHead = head;
 Node* tail = newHead;
 head = head->next;
 tail->next = NULL;
 int num = tail->data;
 mp[num]=num;
 while(head){
    num = head->data;
    if(mp.find(num)==mp.end()){
       tail->next = head;
       tail = tail->next;
       head = head->next;
       tail->next = NULL;
       mp[num]=num;
    }
    else{
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
 }
  return newHead;
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
    printLL(head);
    // removeDuplicates(head);
    removeDuplicatesFromUnSortedLL(head);
    cout<<endl;
    printLL(head);
    return 0;
}
