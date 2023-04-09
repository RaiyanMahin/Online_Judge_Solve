#include <bits/stdc++.h>
using ll = long double;
ll M = 1e9;
using namespace std;
/* ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M)) );
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M);
        return (tmp * tmp);
    }
 
} */
int main()
{
    ll n,m; cin >> n >> m;
    ll DD = n * log10(m);
    ll dd = m * log10(n);
    if(dd == DD)
    {
        cout << "=\n";
    }
    if(dd > DD)
    {
        cout << ">\n";
    }
    if(dd < DD)
    {
        cout << "<\n";
    }
 
}