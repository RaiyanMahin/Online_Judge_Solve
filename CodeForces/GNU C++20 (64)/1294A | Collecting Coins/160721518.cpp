///
// baaalll parrrooo
#include <bits/stdc++.h> 
//#define int long long
using ll = long long;
using namespace std; 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a,b,c,n,s; cin >> a >> b >> c >> n; s = a + b + c + n; ll q = s / 3;
        if(s % 3 == 0 && a <= q && b <= q && c <= q) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}