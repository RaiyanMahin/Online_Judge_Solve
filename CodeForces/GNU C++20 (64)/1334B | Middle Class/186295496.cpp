/*
 
2020-04-10 19:04:42
 
*/
 
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll cnt = 0;
        ll n, k; cin >> n >> k;
        ll a[n + 10];
        for(ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        reverse(a, a + n);
 
 
        ll w = 0;
 
            for(ll i = 0; i < n; i++)
            {
                if(a[i] > k)
                {
                    w += (a[i] - k);
 
 
                }
                if(a[i] <= k)
                    continue;
 
            }
            //cout << "eta sum " << w << '\n';
            for(ll i = 0; i < n; i++)
            {
                if(a[i] < k && w != 0)
                {
                    ll d = k - a[i];
                    if(d <= w)
                    {
                        a[i] = a[i] + d;
                        if( w - d >= 0)
                        {
                            w -= d;
                            if(w <= 0)
                                break;
                        }
                    }
 
                }
            }
 
            for(ll i = 0; i < n; i++)
            {
                if(a[i] >= k)
                    cnt++;
            }
 
 
        cout << cnt << '\n';
        cnt = 0;
 
 
 
    }
}