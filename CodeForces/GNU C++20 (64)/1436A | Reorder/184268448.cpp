#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
int main()
{
 
    ll t; cin >> t;
    while(t--)
    {
        ll n , m; cin >> n >> m; ll x = 0, s = 0;
        while(n--)
        {
            ll x; cin >> x; s += x;
        }
        if(s == m)
        {
            cout << "YES\n";
        }
        if(s != m)
        {
            cout << "NO\n";
        }
    }
}