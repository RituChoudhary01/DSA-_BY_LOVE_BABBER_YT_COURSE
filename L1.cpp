/* Q1.How to solve a Programming Problem?
    Given  the Problem
    1.understand the problem.
    2.Check the given values.
    3.Figure out an approach. 
      This comes from practice and past coding experience.
    4. Code?

    Explation: Given some problem P,say you think of some solution,ki aise karege,etc.Now write down this crude solutin on paper,not necassarily in correct syntex.Now your idea is on paper.convert this rough work,also called 'pseudocode' into a program in a programming lang. uage of your choice,say c++.

    Q2.Pseudocode:A very simple and high-level form of computer language that is used in program design.

    Q3.FlowChart:A FlowChart is a diagramatic representation of an approach.This draws out all the steps of your approach in order.
    Components:
    1.Terminator:specifies the start and end of a program.
    2.Parallelogram:For taking input or showing output.
    3.Process:operations and processes ke liye.
    4.Decision Making: use diamond shape.
    5.Circle: connectors(To be covered when we discuss functions/methods)
    6.Arrows:code ka direction or flow dikhane ke liye. 

     Write flow chart and pseudocode of the following question.
     Q1. Add 2 Number
     Pseudocode:
     1.input two number a and b;
     2. let sum = a+b;
     3.print sum.

     Q2.Calculate simple interest
     SI = (P*R*T)/100(formula) where P = principal Amount,R = Rate,T = Time,SI=Simple Interest
     Pseudocode:
     1.Read P,R,T.
     2.SI = P*R*T/100;
     3.Print SI

     Q3.Determine a<b(a and b given 2 number)
     Pseudocode:
     1.Read a and b;
     2.if a<b 
         then print Yes.
        else
           print No.
     Q4.Check if n is even or odd
      Pseudocode:
      1.Read a
      2.if a%2==0
           print "Yes".
        else 
          print "No".
      3.End.      
     Q5.Is n positive,negative or zero.
      Pseudocode:
      1.Start program
      2.input n
      3. if n>0
           print "positive".
         else if n<0
             print "negative"
         else 
            print "zero"
       4.end           
     Q6.Check if a given triangle is valid.
      Pseudocode:
      1.start program
      2.input a,b,c
      3 if a+b>c && b+c>a && a+c>b
          print "valid"
         else
           print "not valid"
       4.end.      
     Q7.Print all number between 1 to 5(include).
        Pseudocode:-
     1. Start program. 
     2. Take input number.
     3. let i=1;
     4. Check if i<=5 if yes
              print i and i = i+1 check condtion again;
     5. If No
     6. End program.  
     Q8.Print even number between 1 to n(exclusive)
     Pseudocode:
     1.Input n
     2.let num = 2
     3. while num<n
        print num
        num = num+2
     4.End.   
     Q9.Find sum from 1 to n.
      Pseudocode:
      1.input n
      2.let num=1 and sum = 0
      3.while num<=n,
        sum = sum+num
        num=num+1
     4.End   
     Q10.Find n!
       Pseudocode:
       1.input n
       2. let num = 1 and ans = 1
       3.while num<=n,
          ans = ans*num
         num = num+1
       4.End.  
     Q11.Check  n is prime or not
       Pseudocode:
       1.input n.
       2.let div = 2.
       3. while div<2,
             if n%div == 0
                print "No".
                exit
            else
               div = div+1
        4.Print "Yes".           

     Q. What is a programming Language?
        A proframming language is a way to communicate with a computer.It is a formal language which consists of sets of string that produre various kinds of machine output.
        Eg: C,C++,Java,Python,R,Go etc.

        #include<iostream>
        using namespace std;
        int main(){
        cout<<"Hello World";
        return 0;
        }
         main function where the execution of program begins.
         This code in c++ instructs our computer to print "Hello World" on our screen.

     Every language must be written following some rules called syntax of that language.
     A computer essentially only understands binary codes of 0s and 1s.A compiler processes the statements of a programming language into Machine code(Binary)

     source Code ----->Compiler------->Binary/Machine Code.    
*/