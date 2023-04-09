#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
 
int main()
{
    ll n; cin >> n; ll a[n + 1] = {0};
    ll mx = -1, mn = 1e18;
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i], mx = max(mx, a[i]) , mn = min(mn , a[i]);
    }
 
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(a[i] > mn and a[i] < mx)
        {
            ans++;
        }
    }
    cout << ans;
 
}