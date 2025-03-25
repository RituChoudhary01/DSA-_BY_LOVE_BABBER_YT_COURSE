/* Lecture 5 operators and for loop
1.Bitwise operator
  AND(&) 
    1&1 = 1,1&0 = 0,0&0 = 0;both are 1 give 1 then 0.
  OR(|)
   1|1 = 1,1|0=0,0|0=0;both are 0 then give 0 otherwise 1;
  NOT(~) NOT of 1 is 0 and vise versa.
  XOR(^) XOR of same bit give 0.Xor of different bit give 1;
  left Shift: 
  5<<1 = left shift 5,1 times
  101<<1 = 00----0101<<1
           00----1010 = 10 = 5*2^1
    In most cases we multiply with power of 2 but in some cases,this isnot true.  
    0100---00<<1 = 10000---00;
    positive -------> Negative??     
  Right Shift(>>)
  15>>1 = 00---1111>>1;
          00---0111 = 7 = 15/2;
padding in << and >> for positive numbers is done with zero.
For negative numbers,padding is compiler dependent.
 increment and decrement operator
  post increment i++
  pre increment ++i
  post decrement i--
  pre decrement --i
//   output question
Q1. 
int main(){
int a,b = 1;
a = 10;
if(++a)
   cout<<b;
   else
    cout<<++b;
    }
    Ans: 1
// Q2.
int main(){
int a = 1;
int b = 2;
if(a-- >0 && ++b>2){
cout<<"stage1-Inside IF";
}
else{
cout<<"Stage2-Inside else";
}
cout<<a<<" "<<b<<endl;
}
Ans:stage1-Inside IF 0 3
// Q3.
int main(){
int a = 1;
int b = 2;
if(a-- >0 || ++b>2){
cout<<"stage1-Inside IF";
}
else{
cout<<"Stage2-Inside else";
}
cout<<a<<" "<<b<<endl;
}
Ans:stage1-Inside IF 0 2

Q4.
int main(){
int number = 3;
cout<<(25*(++number));
}
Ans:100
Q5.
int main(){
int a = 1;
int b = a++;
int c = ++a;
cout<<b;
cout<<c;
}
Ans: 1 3
for loop
break
continue
//   output question
// Q1.
int main(){
for(int i=0;i<=5;i++){
cout<<i<<" ";
i++;
}
}
Ans: 0 2 4
// Q2.
int main(){
for(int i=0;i<=5;i--){
cout<<i<<" ";
i++;
}
}
Ans: infinite loop
// Q3.
int main(){
for(int i=0;i<=15;i+=2){
cout<<i<<" ";
if(i&1){
continue;
}
i++;
}
}
Ans:0 3 5 7 9 11 13 15
// Q4.
int main(){
for(int i=0;i<5;i++){
for(int j=i;j<=5;j++){
cout<<i<<" "<<j<<endl;
}
}
}
Ans:0 0
    0 1
    0 2
    0 3
    0 4
    0 5
    1 1
    1 2
    1 3
    1 4
    1 5
    2 2
    2 3
    2 4
    2 5
    3 3
    3 4
    3 5
    4 4
    4 5
// Q5.
int main(){
for(int i=0;i<5;i++){
for(int j=i;j<=5;j++){
if(i+j==10) break;
}
cout<<i<<" "<<j<<endl;
}
}
Ans:
    0 0
    0 1
    0 2
    0 3
    0 4
    0 5
    1 1
    1 2
    1 3
    1 4
    1 5
    2 2
    2 3
    2 4
    2 5
    3 3
    3 4
    3 5
    4 4
    4 5
// variable and scope
Scope:the life time of a variable whrer does the variable exix and after what line of code will it get destrayed In short,int accessibility
}
*/
#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<"a "<<(~a)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;
    int i=12;
    cout<<++i<<endl;
    cout<<i<<endl;
    cout<<i++<<endl;
    cout<<i<<endl;
    cout<<--i<<endl;
    cout<<i<<endl;
    cout<<i--<<endl;
    // for loop
    // Q1.print counting 1 from n
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Printing count from 1 to n "<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<" ";
    }
    
    int j=1;
    for(; ;){
        if(j<n) 
         cout<<j<<endl;
        else break;
        j++;
    }
    for(int a = 2,b = 1;a>=0 && b>=1;a--,b--){
        cout<<a<<" "<<b<<endl;
    }
     for(int a = 2,b = 1,c = 2;a>=0 && b>=1 && c>=2;a--,b--,c--){
        cout<<a<<" "<<b<<endl;
    }
    // Q print Fibonacci series
    int n1 = 10;
    int a = 0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
    // Q check prime number
    int n = 17;
    if(i<2){
         cout<<n<<" is not prime number."<<endl;
    }
    else{
        for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<n<<" is not prime number."<<endl;
            break;
        }
    }
    cout<<n<<" is prime number."<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<"HI"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Reply toh karde"<<endl;
    } 

 
}
// Q1. Product and sum
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

 int subtractProductAndSum(int n) {
    int product = 1,sum = 0;
    while(n>0){
    int digit = n%10;
    n/=10;
    product*=digit;
    sum+=digit;
    }
    int ans =  product-sum;
    return ans;
    }
// Q2.Number of 1 bits
// https://leetcode.com/problems/number-of-1-bits/

 int hammingWeight(int n) {
        int count = 0;
        while(n){
            if(n&1) count++;
            n = n>>1;
        }
        return count;
    }



