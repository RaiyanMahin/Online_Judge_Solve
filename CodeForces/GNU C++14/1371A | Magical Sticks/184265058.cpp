#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n == 1)
            cout << 1 << '\n';
        if(n > 1)
        {
            ll x = n / 2;
            if(n & 1)
                cout << x + 1 << '\n';
            else
                cout << x << '\n';
        }
    }
}