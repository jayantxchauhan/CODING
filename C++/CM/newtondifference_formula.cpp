#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x[10], y[10], p[10];
    int k, f, n, i, j=1, f1=1, f2=0;

    cout << "\nEnter the number of observations:\n";
    cin >> n;

    cout << "\nEnter the different values of x:\n";
    for (i=1; i<=n; i++)
        cin >> x[i];

    cout << "\nThe corresponding values of y are:\n";
    for (i=1; i<=n; i++)
        cin >> y[i];

    f = y[1];
    
    cout << "\nEnter the value of 'k' in f(k) you want to evaluate:\n";
    cin >> k;

    do
    {
        for (i=1; i<=n-1; i++)
        {
            p[i] = ((y[i+1] - y[i]) / (x[i+j] - x[i]));
            y[i] = p[i];
        }
        f1 = 1;
        for (i=1; i<=j; i++)
        {
            f1 *= (k - x[i]);
        }
        f2 += (y[1] * f1);
        n--;
        j++;
    }
    while(n != 1);

    f += f2;
    
    cout << "\nf(" << k << ") = " << f;
    cout<<endl<<"UTKARSH SEMWAL"<<endl;
     cout<<"06814802723"<<endl;
    getch();
    return 0;
}
