#include<iostream>
#include<iomanip>
#include<math.h>

#define f(x) (pow(x,3)-4*x-9)
using namespace std;

int main(){
    
    float x0,x1,x,f0,f1,f,e;
    int step=1;
    
    cout << setprecision(6) << fixed;
    up:
    cout << "Enter First Guess:" ;
    cin >> x0;
    cout << "Enter Second Guess:" ;
    cin >> x1;
    cout << "Enter Tolerable Error:" ;
    cin >> e;
    f0 = f(x0);
    f1 = f(x1);
    if(f0*f1 > 00)
    
    {
        cout << "Incorrect Initial Guesses:" << endl;
        goto up;
    }
    cout << endl << "" << endl;
    cout << "Bisection Method" << endl;
    cout << "" << endl;
    do
    {
        x= (x0+x1)/2;
        f=f(x);
        cout << "Iteration-" <<step<< ":\tx=" <<setw(10)<<x<<"and f(x)=setw(10)" <<f(x) << endl;
        
        if (f0*f<0)
        {
            x1=x; }
           else{
               x0=x;
           } 
           step=step+1;
    } while(fabs(f)>e);
        
        cout << endl << "Root is:" << x << endl;
        cout << "JAYANT CHAUHAN"<<endl;
        cout << "06114802723"<<endl;
}