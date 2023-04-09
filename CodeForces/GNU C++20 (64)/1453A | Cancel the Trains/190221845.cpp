#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map < ll , ll > mp;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        mp.clear();
        ll n ,m ; cin >> n >> m;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x; mp[x]++;
        }
         for(ll i = 0; i < m; i++)
        {
            ll x; cin >> x; mp[x]++;
        }
        ll ans = 0;
        for(auto i : mp)
        {
            if(i.second > 1)
            {
                ans += ( i.second );
            }
        }
        cout << ans  / 2 << endl;
 
 
 
    }
}