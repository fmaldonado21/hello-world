#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter an integer: " ;
    cin >> n;
    
    while(n != 1)
    {
        if (n%2==0)
        {
            n = n/2;
        }
        else
        {
            n = 3*n+1;
        }
        cout << n << "\t" ;
    }
    return 0;
}