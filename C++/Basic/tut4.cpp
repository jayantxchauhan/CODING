#include<iostream>

using namespace std;
int glo = 6;
void sum(){
   int a;
   cout<<glo;
}
int main(){
   int glo = 9;
   glo = 78;
   // int a = 4;
   // int b = 5;
   int a = 4, b = 5;
   float pi = 3.14;
   char c = 'u';
   bool is_true = false;
   sum();
   cout<<glo<< is_true;
//cout<<"this is tutorial 4.\nhere the value of a is "<<a<<".\nthe value of b is "<< b;
//cout<<" \nthe value of pi is: "<< pi;
//cout<<"\nthe value of pi is: "<< c;
return 0;

}