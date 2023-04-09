#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll gcd (ll a, ll b)
{
    return b == 0 ? a : gcd(b,a % b);
}
int main()
{
 
    ll n,s; cin >> n >> s;
    if(s % n == 0)
    {
        cout << s / n << '\n';
        return 0;
    }
    else {
        ll w = s / n;
        cout << w + 1 << '\n';
    }
}