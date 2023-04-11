#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector < ll > a;
ll baal(ll l , ll r, ll val)
{
    ll tot = (r - l) + 1 , cc = 0;
    ll L = val , R = r;
    for(ll i = l; i <= r; i++)
    {
        if(a[i] == L)
        {
            cc++; L--;

        }
    }
    if(cc == tot)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        a.clear();
        //cout << "Case" << ' ' << "#" << r << ": " <<  << '\n';
        ll n , k; cin >> n >> k; ll cnt = 0;
        for(ll i = 1; i <= n; i++)
        {
            ll x; cin >> x ; a.push_back(x);
        }
        for(ll i = 0; i < a.size(); i++)
        {
            if(a[i] == k and (i + k - 1) < a.size() and a[i + k - 1] == 1)
            {
                ll gg = baal(i , i + k - 1 , k);
                if(gg)
                    cnt++;

            }
        }
        cout << "Case" << ' ' << "#" << r++ << ": " << cnt << '\n';

    }
}
