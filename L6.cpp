/*
Q1.Decimal To Binary Conversion
Step to convert decimal to binary
1.Divide number by 2
2.store the remainder
3.repeat the process until the number is 0;
4.write the remainder in reverse order

dry run yourself for n=10,n=5;
for example 10
10/2 = 5 remainder 0
5/2  = 2 remainder 1
2/2 = 1 remainder 0
1/2 = 0 remainder 1
stop the process
reverse the remainder 1010 

convert Negative number to binary
let n = -6;
1.Take a 2's complement of a number
-6 ka binary representatiton is equivalent to 2^32-6;
find the binary representation of 2^32-6;

*/ 
#include<iostream>
using namespace std;
// method 1 Decimal to binary
int decimalToBinary(int n){
    int binaryNo=0;
    while(n){
        int bit = n%2;
        binaryNo = binaryNo*10+bit;
        n/=2;
    }
   return binaryNo;
}
// method 2 Decimal to binary
int decimalToBinary2(int n){
    int binaryNo=0;
    while(n){
        int bit = n&1;
        binaryNo = binaryNo*10+bit;
        n = n>>1;
    }
   return binaryNo;
}
// Negative number to binary
void decimalToBinaryNegative(int n) {
    if (n < 0) {
        // Convert to 32-bit two's complement representation
        unsigned int val = (1LL << 32) + n;  // or simply: val = (unsigned int)n;
        bitset<32> binary(val);
        cout << binary.to_string() << endl;
    }
     else {
        bitset<32> binary(n);
        // To avoid printing all 32 bits for positive numbers, print from first '1'
        string s = binary.to_string();
        size_t pos = s.find('1');
        if (pos != string::npos)
            cout << s.substr(pos) << endl;
        else
            cout << "0" << endl;
    }
}
// Binary to decimal
int binaryToDecimal(int n){
    int ans = 0;
    while(n){
        int digit = n%10;
        ans = ans*2+digit;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number to convert in binary"<<endl;
    cin>>n;
    cout<<"decimalToBinary: "<<decimalToBinary(n)<<endl;
    cout<<"decimalToBinary: "<<decimalToBinary2(n)<<endl;
    int n1;
    cout<<"Enter the negative decimal number to convert in binary"<<endl;
    cin>>n1;
    decimalToBinaryNegative(n1);
    int n2;
    cout<<"Enter the binary number to convert into decimal number: "<<endl;
    cin>>n2;
    cout<<"Binary to decimal: "<<binaryToDecimal(n2)<<endl;
    return 0;
}
