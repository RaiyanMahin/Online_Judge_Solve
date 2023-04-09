#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll n, k; cin >> n >> k; ll a[n + 1] = {0};
        ll mx = -INT_MAX, s = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i], mx = max(mx, a[i]);
        }
        sort(a, a + n); reverse(a, a + n);
        s += mx;
        for(ll i = 1; i < n; i++)
        {
            if(k)
            {
                s += a[i];
                k--;
            }
        }
        cout << s << endl;
 
 
 
 
    }
}