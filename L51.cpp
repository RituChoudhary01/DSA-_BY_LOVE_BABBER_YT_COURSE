//Add 2 Number
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
Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void insertAtTail(Node* &head,Node* &tail,int val){
    Node* temp = new Node(val);
 if(head == NULL){
    head = temp;
    tail = temp;
    return;
 }
 else{
    tail->next = temp;
    tail = temp;
 }
 
}
Node* add(Node* first,Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first!=NULL && second!=NULL){
        int sum = carry+first->data+second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
        second = second->next;
    }
    while(first != NULL){
        int sum = carry+first->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
     }
     while(second != NULL){
        int sum = carry+second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        second = second->next;
     } 
     while(carry!=0){
        int sum = carry;
        int digit = sum/10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
     }
     return ansHead;
   
}

Node* addlist(Node* first,Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first!= NULL){
            val1 = first->data;
            first = first->next;
        }
        int val2 = 0;
        if(second!= NULL){
            val2 = second->data;
            second = second->next;
        }
        int sum = carry+val1+val2;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }
    return ansHead;
}
 Node* addTwoLists( Node* first, Node* second){
    first = reverse(first);
    second = reverse(second);
    Node* ans = add(first,second);
    reverse(ans);
    while(ans != NULL){
        cout<<ans->data<<" ";
        ans = ans->next;
    }

    return ans;
}
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    int n,d;
    cout<<"Enter the size of 1st LL: "<<endl;
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
    int n1,d1;
    cout<<"Enter the size of 2nd LL: "<<endl;
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
    
    
    // Node* ans = addTwoLists(head,head1);
      Node* ans = addlist(head,head1);
    cout<<endl;
    ans = reverse(ans);
    printLL(ans);
    return 0;
}
