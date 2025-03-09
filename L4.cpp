/*Pattern Question practics
Q1. n=4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q2. n=4
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = n;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q3. n=4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 1;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q. n=3
9 8 7 
6 5 4 
3 2 1 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = n*n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count--<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q. n=4
* 
* * 
* * * 
* * * * 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q5. n=4
1 
2 2 
3 3 3 
4 4 4 4 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q. n=4
1 
2 3 
4 5 6 
7 8 9 10 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =1;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q. n=4
1 
2 3 
3 4 5 
4 5 6 7 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int count =i;
        int j = 1;
        while(j<=i){
            cout<<count++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q n=4 without using extra variable
1 
2 3 
3 4 5 
4 5 6 7 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 0;
        while(j<i){
            cout<<i+j<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q. n=4
1 
2 1 
3 2 1 
4 3 2 1 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        int count=i;
        while(j<=i){
            cout<<count--<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q.n=4
A A A A 
B B B B 
C C C C 
D D D D 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q.n=4
A B C D 
A B C D 
A B C D 
A B C D 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        char ch = 'A';
        while(j<=n){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q. n=4
A B C D 
B C D E 
C D E F 
D E F G 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q. n=4
A B C D 
B C D E 
C D E F 
D E F G 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q.n=4
A 
B B 
C C C 
D D D D 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        char ch = 'A'+i-1;
        while(j<=i){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q. n=4
A 
B C 
D E F 
G H I J 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}

Q n=4
A 
B C 
C D E 
D E F G 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        char ch = 'A'+i-1;
        int j = 1;
        while(j<=i){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q. n=4
D 
C D 
B C D 
A B C D 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        char ch = 'A'+n-i;
        int j = 1;
        while(j<=i){
            cout<<ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q. n=4
      * 
    * * 
  * * * 
* * * * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k = 1;
        while(k<=n-i){
            cout<<"  ";
            k++;
        }
        int j = 1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q. n=4
* * * * 
  * * * 
    * * 
      * 
    #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k = 1;
        while(k<i){
            cout<<"  ";
            k++;
        }
        int j = 1;
        while(j<=n-i+1){
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
  2 2 2 
    3 3 
      4 
    #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k = 1;
        while(k<i){
            cout<<"  ";
            k++;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q.n=4
      1 
    2 2 
  3 3 3 
4 4 4 4 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k = 1;
        while(k<=n-i){
            cout<<"  ";
            k++;
        }
        int j = 1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q.n=4
      1 
    2 3 
  4 5 6 
7 8 9 10 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count = 1;
    while(i<=n){
        int k = 1;
        while(k<=n-i){
            cout<<"  ";
            k++;
        }
        int j = 1;
        while(j<=i){
            cout<<count++<<" ";
            j++;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q.n=4
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k = 1;
        while(k<=n-i){
            cout<<"  ";
            k++;
        }
        int j = 1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        j=j-2;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
Q.n=5
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int star = 1;
        while(star<i){
            cout<<"* "<<"* ";
            star++;
        }
        j--;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
        }
    return 0;
}
*/
