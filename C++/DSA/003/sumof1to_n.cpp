#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = 1;
    int sum = 0;
    while (num<=n)
    {
       sum = sum + num;
       num = num + 1;
       
    }
    cout<<sum;
}