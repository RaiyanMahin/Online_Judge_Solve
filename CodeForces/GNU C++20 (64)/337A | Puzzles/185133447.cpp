#include <bits/stdc++.h>
using ll = long long;
using namespace std;
//..................... loser////////////////
int main()
{
    ll n , m; cin >> n >> m;
    ll a[m + 1];
    for(ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    ll mx = -1e9, mn = 1e9, ans = 0 , F = 1e9 , cnt = 0;
    for(ll i = 0; i < m; i++)
    {
        cnt = 0;
        mx = -1e5, mn = 1e5;
        for(ll j = i; cnt < n; j++)
        {
 
            if(cnt == n)
                break;
            else
            {
                cnt++;
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
            }
 
        }
        ans = abs(mn-mx);
        F = min(F, ans);
 
        
    }
    cout << F;
 
}