/* Recursion
Recursion:-when a function call itself directly or indirectly the process is called recursion and this call is callled recursion call;
Eg:
int fun(int n){
----
fun(n);
----
}
If the solution of a problem depends on a smaller problem(subproblem)of the same type,then we will use recursion.
Eg: 2^n = 2*2*2*2*2- - - *2(n times);
2^n = 2*2(n-1)
If we make a function that gives us 2^m when it's called like fun(n) then
fun(n)=2*fun(n-1);
recurrence Relation.
Eg: Find factorial(n!)
5! = 5*4*3*2*1;
fact(5)=5*fact(4);
recurrence Relation fact(n)=n*fact(n-1);
Mandantary part in recursion is base case and recursion reletion.
Without a base case,we will get segmentation fault which means you have exhausted your function call stack.
1.Tail Recursion:-Recursion Relation come after processing;
fun(){
base case
processing
Recursion Relation.
}

2.Head Recursion:-Recursion Relation come before processing;
fun(){
base case
Recursion Relation.
processing
}

*/
/* Q.Factorial of smaller number
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
      return 1;
    }
    return fact(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<"factorial of "<<n<<" is : "<<ans<<endl;
    return 0;
}
*/

// Print number form 1 to n
#include<iostream>
using namespace std;
// Tail Recursion
void revPrint(int n){
    // base case
    if(n==0)
      return ;
    // processing
    cout<<n<<" ";
    // Recursion Relation.
    revPrint(n-1); 
}
// Head Recursion
void print(int n){
    // base case
    if(n==0)
      return ;
    // Recursion Relation.
    print(n-1); 
    // processing
    cout<<n<<" ";
}
// find power of 2^n
int power(int n){
    if(n==0)
      return 1;
    return 2*power(n-1);
}
int main(){
    int n;
    cin>>n;
    revPrint(n);
    cout<<endl;
    print(n);
    cout<<endl;
    int ans = power(n);
    cout<<"2 power "<<n<<" is: "<<ans<<endl;
    return 0;
}
