#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n + 1] = {0};
        a[n] = 1e6;
        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll x = 0, y = 0, z = 0;
        ll boo = 0;
        for(ll i = 2; i <= (n - 1); i++)
        {
            if(a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                boo = 1;
                x = i , y = i - 1, z = i + 1;
                break;
 
            }
        }
        if(!boo)
        {
            cout << "NO\n";
        }
        if(boo)
        {
            cout << "YES\n";
            cout << y << ' ' << x << ' ' << z << '\n';
        }
 
    }
}