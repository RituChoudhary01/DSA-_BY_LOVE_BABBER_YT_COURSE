//merge sort
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
Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    if(left == NULL)
      return right;
    if(right == NULL)
       return left;
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }    
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    } 
    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    // break ll into 2 halvs,after finding mid
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;
    // recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    // merge both left and right halves
    Node* result = merge(left,right);
     return  result;
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
    head = mergeSort(head);
    printLL(head);
    return 0;
}

// H.W. flattern LL