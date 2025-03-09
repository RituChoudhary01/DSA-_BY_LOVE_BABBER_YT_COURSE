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
//Q1.Dectect and remove loop in LL
// Approach1
bool detectLoop(Node* head){
    if(head == NULL)
    return false;
    map<Node*,bool>visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]= true;
        temp = temp->next;
    }
    return false;
}
// Approach2
bool detectLoopUsingSlowFast(Node* head){
    if(head == NULL) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) return true;
    }
    return false;
}
//Q2. Starting node of loop
Node* getStartingNode(Node* head){
    if(head==NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            break;
        }
    }
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
// Q3.remove loop in LL
void removeLoop(Node* head){
    if(head == NULL) return ;
    Node* startofLoop = getStartingNode(head);
    Node* temp = startofLoop;
    while(temp->next != startofLoop){
        temp = temp->next;
    }
    temp->next = NULL;
    return;
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
    tail->next = head->next->next;
    // printLL(head);
    cout<<endl;
    if(detectLoop(head)){
        cout<<"Loop is present"<<endl;
    }
    if(!detectLoop(head)){
        cout<<"Loop is not present"<<endl;
    }
    if(detectLoopUsingSlowFast(head)){
        cout<<"Loop is present"<<endl;
    }
    if(!detectLoopUsingSlowFast(head)){
        cout<<"Loop is not present"<<endl;
    }
    cout<<"starting point of loop is "<<getStartingNode(head)->data<<endl;

    removeLoop(head);
    cout<<"LL after remove a loop:"<<endl;
    printLL(head);
    return 0;
}
