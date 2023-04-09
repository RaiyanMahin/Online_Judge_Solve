#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll a, b; cin >> a >> b;
        if(a == b)
        {
            cout << "0\n";
        }
        else
        {
            ll x = abs(a - b);
            if(x % 10)
            {
                cout << (x / 10) + 1LL << '\n';
            }
            if(x % 10 == 0)
            {
                cout << (x / 10) << '\n';
            }
        }
    }
 
}