/*
Time and Space Complexity
Time Complexity:-
  It is the amount of time taken by an algorithm to run.
   as a function of length of the input.

   why we need time complexity
   1.For making better programs
   2.Comparision of algorithm.

  Big O notation represent upper bound;
  Theda notation represent for avarage case Complixity
  Omega notation represent for lower bound;

  Constant time = O(1);
  Linear time = O(n);
  Logarithmic time = O(log n);
  Quadratic time = O(n^2);
  Cubic time = O(n^3);

  Examples
  1. f(n)=2n^2+3n   T.C:O(n^2);
  2. f(n)=4n^4+3n^3  T.C:O(n^4);
  3. f(n)=n^2+logn   T.C:O(n^2);
  4. f(n)=234         T.C:O(1);
  5.f(n) = O(n/4)     T.C:O(n);

O(1)< O(log n) < O(n^1/2) < O(n) < O(nlog n) < O(n^2) < O(n^3) < O(2^n) < O(n!) < O(n^n);
 Least Complexity ---------->  More Complexity --------->


10^8 operation rule:-Most of the modern machine can perform 10^8 operation par second.
                  <=[10,11]=O(n!),O(n^6);
                  <[15,18]=O(2^n*n^2);
                  <100 = O(n^4);
 less then input  <400 = O(n^4);
                  <2000 =O(n^3);
                  <10^4 =O(n^2*logn);
                  <10^6 =O(n^2);
                  <10^8 =O(nlogn),O(n),O(logn);

Space complexity :-
 it is the amount of space taken by the algorithm to run as a function of length of the input.
 Every fixed variable has O(1)complexity.
 Loop takes time complexity not take space complexity. 
Examples
Q1.
int main(){
int a=0,b=0,n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
cout<<"Hi\n";
}
for(int i=0;i<m;i++){
cout<<"Hi2";
}
return 0;
}
T.C:O(n)+O(m);
S.C:O(1);

Q2.
int a = 0,b=0;
ffor(int i=0;i<n;i++){
a = a+rand();
}
for(int i=0;i<m;i++){
b = b+rand();
}
assume that rand()is O(1) time,O(1)space function

T.C:O(n)+O(m)
S.C:O(1);

Q3.
int a=0,b=0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
a = a+j;
}
}
for(k=0;k<n;k++){
b = b+k;
}
T.C:O(n^2)+O(n);
S.C:O(1);

Q4.
int a = 0;
for(i=0;i<N;i++){
for(j=N;j>i;j--){
a = a+i+j;
}
}
T.C:O(N^2);
S.C:O(1);

*/