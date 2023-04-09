#include <bits/stdc++.h>
using ll = long long;
using namespace std;
vector < ll > a, b;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        a.clear();
        b.clear();
        int n; cin >> n;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x; a.push_back(x);
        }
        for(ll i = 0; i < n; i++)
        {
            ll y; cin >> y; b.push_back(y);
        }
        ll X = *min_element(a.begin(), a.end());
        ll Y = *min_element(b.begin(), b.end());
        ll ans = 0LL;
        for(ll i = 0; i < n; i++)
        {
            if(a[i] != X && b[i] != Y)
            {
                ll p = a[i] - X;
                ll q = b[i] - Y;
                ll w = min(p,q);
                ans += w;
                a[i] = a[i] - w;
                b[i] = b[i] - w;
            }
        }
 
 
 
 
        //cout << "  ans  " << ans << '\n';
        for(ll i = 0; i < n; i++)
        {
 
                ans += (a[i] - X);
                ans += (b[i] - Y);
 
        }
 
        cout << ans << '\n';
 
 
 
    }
 
}