#include <bits/stdc++.h>
#define ll int
using namespace std;
#define MX 10
ll a[MX], b[MX];
main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n , m; cin >> n >> m;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    ll ans = 10 , mil = -1;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                ans = min(ans , a[i]);
                mil = 1;
 
 
            }
        }
    }
    if(mil == 1)
        return cout << ans , 0;
    return cout << min(a[0],b[0]) << max(a[0], b[0]) ,0 ;
 
 
 
 
}