/*
IDE(Integrated Development Enviroment):-
An enviroment that helps you write,run and even debug(in some cases) code in a programming language.
Eg:- VS Code,Code Studio,Eclipse,NetBeans,Sublime,etc.

our first program in c++ (Namaste Duniya)
#include<iostream>
using namespace std;
int main(){
cout<<"Namaste Duniya"<<endl;
return 0;
}

1.Our program will find int main(){
and start executing of program from there.
}
2.int main(){
these breackets show the scope of the main function. i.e the code which belongs to is defined within int main() function.
}
3.In c++ we use "cout" to print something.
eg: cout<<"Nameste Duniya";
4.This cout is already defined in a file(header file) which must be include before using cout.
#include<file name> is a preprocessor directive which runs before the program is compiled and includes the file to be used later in the source code.
A file called iostream has cout defined in it so:
#include<iostream>
Hint:i/o means input/output.
5.Namespaces:a namespace is a declarative region that organizes code into logical groups and prevents name conflicts.
using namespace std;
6.using cout: we use "<<" after "cout" to desplay something to standard output(your screen) within std namespace.
7.endl: used to enter new line. Just like Enter endl is like "\n" which is a new line escape sequence character used in various languages includeing c++.
cout<<"Namaste Duniya"<<endl;
8.endl;:";" is used to terminate statements.
Data types:Different types of data to be stored in memory.
Eg.integer,float,character,double etc.
int: Stores integers like  -5,0,85 etc.
char: Stores single character like 'a','$','F','6','@'etc.
float: Stores Floating point values like -2.014,1.000,6.7800.
Different data types use different amount of memory.Amount of memory used also depends on the architecture of your CPU.

DATA TYPE      Size(in Bytes)
int                 4
float               4
double              8
char                1
bool                1
void                0

Variable Naming/Nomenclature:
1.Can contain alphabets,number and underscores.
2.Cannot start with a number.
3.Cannot be keywords like int,cout,double,bool etc.
4.Case sensitive.
5.Cannot contain special symbols like %,$,!,# etc.

To check the size of data type we use sizeof(variable_name). 

How is data stored in memory?
 eg: int a = 8;//int takes 4 bytes = 32 bits
 in binary 8 = 1000(4 bits needed)
 int a = 00000000 00000000 00000000 00001000 32bits
 eg: char c = 'a';
   character are maped to the standard ASCII values
   'a'=97      'A'=65
   'b'=98      'B'=66
   'c'=99      'C'=67
      :           :
      :           :
    'z'=122     'Z'=90

     char c='a' ASCII of a is 97
      Binary reperestation of 97 is 01100001 it takes 1 byte.
      corresponding to 'a' store in memory is 01100001
      Type Casting and Storing Variables
      Conversion of one data type to another(if it is valid) is called type Casting.
      Eg: int a ='a'
      variable a will store the ASCII value of 'a' = 97.
      Eg: char ch = 98;
      98 will automatically get typecasted to its corresponding character.
      This automatic typecasting is called implicit typcasting.

      what if we type cast from int to char but the value is too large to be stored in char?
      Sol:A warning is thrown and the last byte from the original value is given to the character.
      How are negative numbers stored?
      sol:
       the first bit tells us whether the number is positive or negative.
        first bit = 0 means positive
        first bit = 1 means negative
      Steps to store -5 in binary format:
      1.Ignore the -ve sign(5).
      2.Write the binary representation of 5.
      3.Take its 2's complement and store it.
      Eg: a = -5;
      1. -5 = 5(ignore -ve sign)
      2. 5  = 0101 --> 00000000 00000000 00000000 00000101(binary)
      3. 2's complement = 1,s complement+1
           5 = 00000000 00000000 00000000 00000101 

      1's complement:=  11111111 11111111 11111111 11111010 
                        +                                 1
      2's complement:=  11111111 11111111 11111111 11111011

     Displaying Negative Number:
     1.Take 2's complement of the stored number
     stored:  11111111 11111111 11111111 11111011
     MBS is 1 this show negative number
    1's complement: 00000000 00000000 00000000 00000100
    2's complement: 00000000 00000000 00000000 00000101

    Why 2's Complement?
    if we stored numbers as it is without using 2's complement,then
     10000000 00000000 00000000 00000000
     and
     00000000 00000000 000000000 00000000
     will be equal and thus waste space.

     Store only Positive Integers
     The default signed representation allow us to store both positive and negative values.
     To store only positive integers,we use unsigned
     Eg: unsigned int a = 10;

     What if we store a negative value in an unsigned number?
     Ex: unsigned int a = -112;
     cout<<a<<endl;
     output: 4294967184
     Explaination:
     We tried to store -112
     -112 = 2's complement of 112
     112 = 00000000 00000000 00000000 01110000
     1's complement: 11111111 11111111 11111111 10001111
                     +                                 1
     2's complement: 11111111 11111111 11111111 10010000
     unsigned int uses all 32 bits to store the value and the MSB(=1)will make the value.
     An unsigned int does not use the 2's complement again to display the number.
     Thus 11111111 11111111 11111111 10010000 gets printed as it is in decimal.

     Basic Arithmetic Operators:
     +,-,*,/,%
     1.int/int = int(floor value of ans)
     2.float/int or int/float = float
     3. double/int or int/double = double
     Relational operators:
     ==,>=,<=,>,<,!=
     Logical Operators:
     &&,||,!
     1.Logical AND(&&):
     All condition must be true for the output to be true.
     eg:int a = 5,b=10,c=15;
     cout<<((a>0)&&(b!=0)&&(c<=15));
     ans:1
     2.Logical OR(||):
     At least 1 condition must be true for the output to be true.
     Eg:int a=5,b=10,c=15;
     cout<<((a>=5)||(b<10)||(c>=15));
     ans:1
     3.Logical NOT:
     Inverts the logic true convert into false and false convert into true.
     nonzero <---> zero
     Eg: int a = 10,b = 0;
     cout<<(!a)<<" ";
     cout<<(!b)<<endl;
     Ans: 0 1
   */

#include <iostream>
using namespace std;
int main()
{
    cout << " Namaste Dunia " << endl;
    int num = 123;
    cout<<num<<endl;
    cout<<"Size of integer is "<<sizeof(num)<<" bytes\n"<<endl;
    
    char ch = 'a';
    cout<<ch<<endl;
    cout<<"Size of character is "<<sizeof(ch)<<" bytes\n"<<endl;
    
    bool bl = true;
    cout<<bl<<endl;
    cout<<"Size of bool is "<<sizeof(bl)<<" bytes\n"<<endl;
    
    float f = 1.2;
    cout<<f<<endl;
    cout<<"Size of float is "<<sizeof(f)<<" bytes\n"<<endl;
    
    double d = 32.678;
    cout<<d<<endl;
    cout<<"Size of double is "<<sizeof(d)<<" bytes\n"<<endl;
    
    int a = 'a';
    cout<<"The value of a is "<<a<<endl;
    
    char b = 98;
    cout<<"The value of b is "<<b<<endl;
    
    int num1 = 20;
    int num2 = 40;
   
    cout<<(num1+num2)<<endl;
    cout<<(num1-num2)<<endl;
    cout<<(num1*num2)<<endl;
    cout<<(num1/num2)<<endl;
    cout<<(num1%num2)<<endl;

    cout<<(num1==num2)<<endl;
    cout<<(num1>num2)<<endl;
    cout<<(num1>=num2)<<endl;
    cout<<(num1<=num2)<<endl;
    cout<<(num1<num2)<<endl;
    cout<<(num1!=num2)<<endl;

    cout<<(num1&&num2)<<endl;
    cout<<(num1||num2)<<endl;
    cout<<(!num1)<<endl;
    cout<<(!0)<<endl;

    return 0;
}

