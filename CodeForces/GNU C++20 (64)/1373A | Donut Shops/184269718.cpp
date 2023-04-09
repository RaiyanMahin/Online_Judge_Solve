#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
 
        ll a, b,c; cin >> a >> b >> c;
        ll A = 0, B = 0;
        ll x = 1 * a;
        ll y = 1 * c;
        if(x >= y)
            A = -1;
        if(x < y)
            A = 1;
 
        ll X = c;
        ll Y = b * a;
        if(X < Y)
            B = b;
        if(X >= Y)
            B = -1;
 
 
        cout << A << ' ' << B << '\n';
 
 
 
 
 
 
    }
}