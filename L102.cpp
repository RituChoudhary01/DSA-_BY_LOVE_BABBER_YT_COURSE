/*
Dynamic Programming
*/
// Q1.Fibonacci series
// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156
#include<iostream>
#include<vector>
using namespace std;
/* Reccursive solution
  int fib(int n){
    // base case
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<n<<"th term of fibbonaci series is: "<<fib(n)<<endl;
    return 0;
}
*/


/*
// top down approach
int fib(int n, vector<int> &dp) {
        // base case
    if (n <= 1) {
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
}

int main() {
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<n<<"th term of fibbonaci series is: "<<fib(n,dp)<<endl;
    return 0;
}
*/


/*
// bottom up approach
int main() {
        int n;
        cout<<"Enter the value of n:"<<endl;
        cin>>n;
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i=2; i<=n; i++){
                dp[i] = dp[i-1] + dp[i-2];
        }

        cout<<n<<"th term of fibbonaci series is: "<<dp[n]<<endl;
       return 0;
}
*/


/*  Space Optimazation.
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int prev1 = 1;
    int prev2 = 0;
    if(n==0){
      cout<<n<<"th term of fibbonaci series is: "<<prev2<<endl;
      return 0;
    }
    for(int i=2;i<=n;i++){
        int curr = prev1+prev2;
        prev2 = prev1;
        prev1 = curr;
    }  
    cout<<n<<"th term of fibbonaci series is: "<<prev1<<endl;
    return 0;
}
*/
