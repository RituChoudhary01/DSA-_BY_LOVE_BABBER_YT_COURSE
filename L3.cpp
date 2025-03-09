/*
Conditionals like these are solved using if statements.
if(condition){
  if the condition within() is true,then execute the entire code block within {}.
}

Thus, if(a>b){
cout<<a<<endl;
}
if(a<=b){
cout<<b<<endl;
}
In the above example,instead of checking again for b>a in the second if block,we know that if the first if condition does not get fulfitted,then the second block must be executed no matter what.This can be achieved using an if-else block.

if this is fullfilled else block wasnot execute 
if(a>b){
cout<<a<<endl;
}
else{
cout<<b<<endl;
}

cin>>n Waits for user to give input and assigns it to n at its address.

Example: int a;
         cin>>a;
         1.variable a will get initialized with a random, 'garbage' value.
         2. Program waits for user to give input (an integer) to a and stores a with that value.

*/
#include<iostream>
using namespace std;
/*
int main(){
    int a;
    cout<<"value of a: "<<endl;
    cin>>a;
    cout<<"Print the value of a: "<<a<<endl;
    return 0;
}
*/
/*
// if statement
int main(){
    int a;
    cin>>a;
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    return 0;
}
// Here if block doesnot execute and the program exist without printing anything.

*/

int main(){
    int a;
    cin>>a;
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else{
        cout<<"a is not positive"<<endl;
    }
    // if statements
    // compare 2 number:
    int num1,num2;
    cout<<"Enter the value of num1: ";
    cin>>num1;
    cout<<"Enter the value of num2: ";
    cin>>num2;
    if(num1>num2){
        cout<<"num1 is greater then num2"<<endl;
    }
    if(num2>num1){
        cout<<"num2 is greater then num1"<<endl;
    }
    // Note: cin ignores Enter(\n),tab(\t) and space( )while taking input.These are called whitespace characters. use cin.get() to read these whitespace characters.

    // if-else statements
    int num3;
    cin>>num3;
    if(num3>0){
        cout<<"num3 is positive"<<endl;
    } 
    else{
        cout<<"a is not positive "<<endl;
    }
    // In this else block, we can see that either a will be negative or 0.so we can further break down this else block.

    int num4;
   cin>>num4;
   if(num4>0){
    cout<<"num4 is positive"<<endl;
   }
   else{
    if(a==0){
        cout<<"a is 0"<<endl;
    }
    else{
        cout<<"a is negative"<<endl;
    }
}
// code ganda hote jaa raha hai.Ek-do baar aur nested if-else use kar diya to.
// if elseif

int num5;
cin>>num5;
if(num5>0){
    cout<<"num5 is positive"<<endl;
}
else if(num5<0){
    cout<<"num5 is negative"<<endl;
}
else{
    cout<<"num5 is 0"<<endl;
}
// else if and else are optional
// else can be used as a default case.
return 0;
}
/*
Output question:
int main(){
int a = 9;
if(a==9){
cout<<"Niney";
}
if(a>0){
cout<<"Positive";
}
else{
cout<<"Negative";
}
return 0;
}
Ans:NineyPositive

int main(){
int a = 2;
int b = a+1;
if((a=3)==b{
cout<<a;
}
else{
cout<<a+1;
}
return 0;
}
Ans:3
in the if statement a is assigned 3 Now a==b is true;

int main(){
int a = 24;
if(a>20){
cout<<"Hellow";
}
else if(a==24){
cout<<"Hellow ji";
}
else{
cout<<"kse ho dost";
}
cout<<a;
return 0;
}
Ans:Hellow24

// check the character is uppercase,lowercase,number and spacical char
int main(){
char a;
cin>>a;
if(a>='A'&&a<='Z'){
cout<<"This is upper Case"<<endl;
}
else if(a>='a' && a<='z'){
cout<<"This is lower case"<<endl;
}
else if(a>='0' && a<='9'){
cout<<"This is a digit"<<endl;
}
else{
cout<<"This is special character"<<endl;
}
return 0;
}

While Loop
while(condition){
while the condition is true,keep on executing the block.
}

Q.Print number from 1 to N;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
cout<<i<<" ";
i++;
}
return 0;
}

Q.Find sum from 1 to n
int main(){
int n;
int sum = 0;
cin>>n;
int i=1;
while(i<=n){
sum+=i;
i++;
}
cout<<"Sum from 1 to "<<n<<" is: "<<sum<<endl;
return 0;
}

Q.Find sum of all even numbers
int main(){
int n;
cin>>n;
int sum = 0;
int i=2;
while(i<=n){
sum+=i;
i=i+2;
}
cout<<"sum of all the even number from 1 to "<<n<<" is: "<<sum<<endl
return 0;
}
Q.Fahrenheit to Celsius conversion
C=5/9(F-32)
int main(){
float fahrenheit;
cin>>fahrenheit;
float celsius = (5.0/9)*(fahrenheit-32);
cout<<fahrenheit <<" F = "<<celsius<<" C "<<endl;
return 0;
}
// if you divide 5/9 its give int value please carefull

Q.Prime or not
int main(){
int n;
cin>>n;
int i=2;
while(i<n){
if(n%i==0){
cout<<"Not Prime"<<endl;
return 0;
}
i = i+1;
}
cout<<"Prime"<<endl;
return 0;
}

// Patterns
Q.n=4
* * * * 
* * * * 
* * * * 
* * * * 

int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
        }
        return 0;
}

Q. n=4
1 1 1 1 
2 2 2 2 
3 3 3 3 
4 4 4 4 

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
        return 0;
}
*/
