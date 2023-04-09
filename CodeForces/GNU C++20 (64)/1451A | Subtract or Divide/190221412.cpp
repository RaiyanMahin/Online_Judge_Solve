#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n <= 3)
        {
            cout << n - 1 << '\n';
        }
        if(n > 3)
        {
            if(n & 1)
            {
                cout << "3\n";
            }
            if( ! (n & 1))
            {
                cout << "2\n";
            }
        }
 
    }
}
 
 
 
 
 