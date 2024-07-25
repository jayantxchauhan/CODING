#include<iostream>

using namespace std;

int c = 45;

int main()
{
    // *********build in data types**********
   // int a, b, c;
    // cout<<"enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"the sum is c: "<<c<<endl;
    // cout<<"the sum is c: "<<::c;

// *********float, double and long double literals**********
//  float d=34.4F;
//  long double e = 34.4L;
//  cout<<"the value 34.4 d is "<<sizeof(34.4)<<endl;
//  cout<<"the value 34.4f d is "<<sizeof(34.4f)<<endl;
//  cout<<"the value 34.4F d is "<<sizeof(34.4F)<<endl;
//  cout<<"the value 34.4l d is "<<sizeof(34.4l)<<endl;
//  cout<<"the value 34.4L d is "<<sizeof(34.4L)<<endl;
//  cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e; 

//*****************reference variables***************
//jayant ---> mitthu ---> jaya ---> jaggu

// float x = 455;
// float & y=x;
// cout<<x<<endl;
// cout<<y<<endl;


//*****************type casting***************

int a = 45;
float b = 45.46;
cout<<"the value  of a is "<<(float)a<<endl;
cout<<"the value  of a is "<<float(a)<<endl;

cout<<"the value  of b is "<<(int)b<<endl;
cout<<"the value  of b is "<<int(b)<<endl;

int c = int(b);

cout<<"the expression is "<<a+b<<endl;
cout<<"the expression is "<<a+(int)b<<endl;
cout<<"the expression is "<<a+int(b)<<endl;

    return 0;
}
