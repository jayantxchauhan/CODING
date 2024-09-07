#include<iostream>
using namespace std;

int main(){
char ch;
cout<<"please enter your character: ";
cin>>ch;

if(ch>='a'&&ch<='z'){
    cout<<"lowercase"<<endl;
}
else if(ch>='A'&&ch<='Z'){
    cout<<"UPPERCASE"<<endl;
} 
else{
    cout<<"numeric"<<endl;
}

}