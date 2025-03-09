/*Stack = it is a linear data structure which flow LIFO order.
Operation on stack:
1.Push:- push is used to push the element in stack.
2.Pop:- pop is used to pop the element in the stack.
3.Top:- it gives the top element of the stack.
4.Size:- it give the size of the stack.
5.Empty:- to check stack is empty or not.
we use STL of stack
declaration of stack
stack<data_type>name_of_stack
stack<int>st;
st.push(5) use to push 5 in st stack.
st.push(34);
st.pop() pop the top element of the stack.
int topElement = st.top() it gives top element of stack 
int size = st.size() it give size of stack.
bool stackIsEmpty = st.empty() it give stack is empty or not.
*/
#include<iostream>
using namespace std;
// Implement of stack using array
class Stack{
    public:
    // properties
    int *arr;
    int top;
    int size;
    // behaviour
     Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
     }
     void push(int element){
      if(size-top>1){
        top++;
        arr[top]=element;
      }
      else{
        cout<<"Stack Overflow"<<endl;
      }
     }
     void pop(){
      if(top>=0)
      top--;
      else{
        cout<<"Stack Underflow"<<endl;
      }
     }
     int peek(){
      if(top>=0)
        return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
        }
        return 0;
     }
     bool isEmpty(){
      if(top==-1) return true;
      else return false;
     }
};
// H.W: Implement of stack using LL

//Q. Implement of two stack using an array
class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    TwoStack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1] = num;
        }
        // else{
        //     cout<<"Stack Overflow."<<endl;
        // }
    }
    void push2(int num){
       if(top2-top1>1){
            top2--;
            arr[top2] = num;
        }
        // else{
        //     cout<<"Stack Overflow."<<endl;
        // }
    }
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else return -1;
    }
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     if(st.isEmpty()){
        cout<<"stack is Empty"<<endl;
     }
     else{
         cout<<"stack is not Empty"<<endl;
     }
     return 0;
}

