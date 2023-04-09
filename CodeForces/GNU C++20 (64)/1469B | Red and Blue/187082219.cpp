#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void baal()
{
    ll n; cin >> n;
    ll s1 = 0, s2 = 0, mx1 = 0, mx2 = 0;
    while(n--)
    {
        ll x; cin >> x; s1 += x; mx1 = max(mx1 , s1);
    }
    ll m; cin >> m;
    while(m--)
    {
        ll x; cin >> x; s2 += x; mx2 = max(mx2 , s2);
    }
    cout << mx1 + mx2 << endl;
 
 
 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
}