#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
map < ll ,ll > mp;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        mp.clear(); ll n ; cin >> n; ll ans = 0, mpx = -1;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            mp[x]++;
            mpx = max(mpx, mp[x]);
        }
        if(mpx > 1)
        {
            ans = 1;
        }
 
        cout << (ans ? "YES" : "NO" ) << endl;
 
    }
 
 
}