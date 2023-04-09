#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main()
{
    ll n; cin >> n;
    if(n < 3)
    {
        cout << "No\n";
    }
    if(n >= 3)
    {
        cout << "Yes\n";
        if(n & 1)
        {
            cout << (n / 2) + 1 << ' ';
            for(ll i = 1; i <= n; i += 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
            cout << n / 2 << ' ';
            for(ll i = 2; i < n; i += 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
 
        }
        if(! (n & 1))
        {
            cout << n / 2 << ' ';
            for(ll i = 1; i < n; i += 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
            cout << n / 2 << ' ';
            for(ll i = 2; i <= n; i += 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
 
        }
    }
 
}