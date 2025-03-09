// Q.Clone a LL
#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->random = NULL;
    }
};
 void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* temp = new Node(d);
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    Node *copyList(Node *head)
    {
        //Write your code here
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        // step 1 : creating a clone of linked list
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // step 2 : creating map of nodes
        unordered_map<Node*, Node*> mp;
        
        Node* originalNodeList = head;
        Node* cloneNodeList = cloneHead;
        
        // setting up the mapping
        while (originalNodeList != NULL && cloneNodeList != NULL) {
            mp[originalNodeList] = cloneNodeList;
            originalNodeList = originalNodeList->next;
            cloneNodeList = cloneNodeList->next;
        }
        
        // step 3 : now setting up the random pointers
        originalNodeList = head;
        cloneNodeList = cloneHead;
        
        while (originalNodeList != NULL && cloneNodeList != NULL) {
            cloneNodeList->random = mp[originalNodeList->random];
            originalNodeList = originalNodeList->next;
            cloneNodeList = cloneNodeList->next;
        }
        
        return cloneHead;
        
    }
   Node *copyListbest(Node *head)
    {
        //Write your code here
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        // step 1 : creating a clone of linked list
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        
        // step 2 : clone nodes add between original nodes
        Node* originalNodeList = head;
        Node* cloneNodeList = cloneHead;
        
        // setting up the links
        while (originalNodeList != NULL && cloneNodeList != NULL) {
            // changing links of original node list
            Node* next = originalNodeList->next;
            originalNodeList->next = cloneNodeList;
            originalNodeList = next;
            
            // changing links of clone node list
            next = cloneNodeList->next;
            cloneNodeList->next = originalNodeList;
            cloneNodeList = next;
        }
        
        // step 3 : copying random pointers
        temp = head;
        
        while (temp != NULL) {
            if (temp->next != NULL) {
                temp->next->random = temp->random ? temp->random->next : temp->random;
            }
            temp = temp->next->next;
        }
        
        // step 4 : revert changes done in step 2
        originalNodeList = head;
        cloneNodeList = cloneHead;
        
        while (originalNodeList != NULL && cloneNodeList != NULL) {\
            originalNodeList->next = cloneNodeList->next;
            originalNodeList = originalNodeList->next;
            
            if (originalNodeList != NULL) {
                cloneNodeList->next = originalNodeList->next;
            }
            cloneNodeList = cloneNodeList->next;
        }
        
        // step 5 : return ans
        return cloneHead;
        
    }
