#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    map < ll  ,ll > mp;
    while(t--)
    {
        mp.clear();
        ll n; cin >> n;
        while(n--)
        {
            ll x; cin >> x; mp[x]++;
 
        }
        ll mx = -1;
        for(auto i : mp)
        {
            mx = max(mx, i.second);
        }
        cout << mx << endl;
 
 
    }
}
 
 
 
 
 