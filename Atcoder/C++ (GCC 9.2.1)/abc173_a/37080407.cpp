#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n;
    if(n >= 1000)
    {
        ll x = n / 1000;
        if(n % 1000 == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            x++;
            ll y = x * 1000;
            cout << y - n ;

        }
    }
    if(n < 1000)
    {
        cout << 1000 - n;
    }
}


