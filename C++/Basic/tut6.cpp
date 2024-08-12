
//there are two types of header files
//1. system header files: it comes with the
#include<iostream>
//2. user defined header files: it is written by the programmer
//#include "this.h" -->this will produce an error if this.h is not present in the current directory
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"operators in C++"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    //arithemetic operators
    cout<<" the value of a+b is "<< a+b<<endl;
    cout<<" the value of a-b is "<< a-b<<endl;
    cout<<" the value of a*b is "<< a*b<<endl;
    cout<<" the value of a/b is "<< a/b<<endl;
    cout<<" the value of a%b is "<< a%b<<endl;
    cout<<" the value of a ++is "<< a++<<endl;
    cout<<" the value of a --is "<< a--<<endl;
    cout<<" the value of ++a is "<< ++a<<endl;
    cout<<" the value of --a is "<< --a<<endl;
    cout<<endl;

    //assigment operators --> used to assign values to variabls
    //int a=3, b=9;
    //char d='d';

    //comparison OPERATORS
    cout<<"following are the types of camparison operators in c++"<<endl;
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;

        //logical OPERATORS
    cout<<"following are the types of logical operators in c++"<<endl;
    cout<<"the value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
 
  
    return 0;
}
