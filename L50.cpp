// Q1.Check LL is palindrome
#include<iostream>
#include<vector>
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
// Approach 1
bool checkPalindrome(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        if(arr[s]!=arr[e])
          return false;
         s++;
         e--; 
    }
    return true;
}

bool isPalindrome(Node* head){
    vector<int>arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
}
// Approach 2
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
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
bool isPalindromeOpt(Node* head){
    if(head->next == NULL)
    return true;
    Node*  middle = getMid(head);
    Node* temp = middle->next;
    middle->next = reverse(temp);
    Node* head1 = head;
    Node* head2 = middle->next;
    while(head2 != NULL){
        if(head1->data != head2->data)
        return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = middle->next;
    middle->next = reverse(temp);
    return true;
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
    cout<<endl;
    // if(isPalindrome(head)){
    //     cout<<"LL is palindrome.";
    // }

    if(isPalindromeOpt(head)){
        cout<<"LL is palindrome.";
    }
    else{
        cout<<"LL is not palindrome.";
    }
    
    return 0;
}


