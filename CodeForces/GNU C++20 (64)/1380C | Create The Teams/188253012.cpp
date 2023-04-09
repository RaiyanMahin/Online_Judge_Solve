#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < ll > a;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        a.clear();
        ll n , x; cin >> n >> x; ll ans = 0, mn = INT_MAX;
        while(n--)
        {
            ll v; cin >> v; mn = min(mn, v);
            if(v >= x)
                ans++;
            else
                a.push_back(v);
 
        }
        sort(a.rbegin(), a.rend());
        ll cnt = 0;
        for(ll i = 0; i < a.size(); i++)
        {
            cnt++;
            if(cnt * a[i] >= x)
            {
                ans++;
                cnt = 0;
 
            }
 
        }
        cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
    }
}