#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n == 1) cout << -1 << '\n';
        if(n > 1)
        {
            cout << 2 ;
            for(ll i = 1; i <= (n - 1) ; i++)
            {
                cout << 3;
            }
            cout << '\n';
            
        }
    }
}