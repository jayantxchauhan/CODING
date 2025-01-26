#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){

    int n,k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    int i=0;
    for (int j = 0; j < n; j++) { 
        cin >> arr[j]; 
    } 
    while (sum<k)
    {
      sum=sum+arr[i];
      i=i+1;
    }
    cout<<i<<endl;
    
}
}
