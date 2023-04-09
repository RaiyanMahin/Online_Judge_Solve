///
#include <bits/stdc++.h>
using ll = long long;
ll M = 1e9;
using namespace std;
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M)) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M);
        return (tmp * tmp) % M;
    }
 
}
int main()
{
 
        ll a; cin >> a;
        ll q = bigmod(1378,a,M);
        ll DF  = q % 10;
       cout  << DF << '\n';
 
 
 
}
 
 
 
 
 
 