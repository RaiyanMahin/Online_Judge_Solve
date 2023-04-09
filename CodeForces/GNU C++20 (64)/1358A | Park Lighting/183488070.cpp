#include <bits/stdc++.h>
using  namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll n,m ;cin >> n >> m;
        ll c = n * m;
        if(c % 2 == 0)
            cout << c / 2 << '\n';
        if(c % 2 == 1)
        {
            cout << c /2 + 1 << '\n';
        }
    }
 
}