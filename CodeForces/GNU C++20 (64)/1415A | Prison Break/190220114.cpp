 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define endl '\n'
int main()
{
 
    ll tccc; cin >> tccc;
    while(tccc--)
    {
        ll n,m,r,c; cin >> n >> m >> r >> c;
        ll x = (r - 1LL) + (c - 1);
        ll y = (n - r) + (m - c);
        ll z = (r - 1) + (m - c);
        ll k = (n - r) + (c - 1LL);
        cout << max4(x,y,z,k) << "\n";
 
    }
}
 
 