#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
map < ll , ll > mp;
void baal()
{
    mp.clear();
    ll n , m, l; cin >> n >> m >> l;
    for(ll i = 1; i <= m; i++)
    {
        ll k; cin >> k;
        while(k--)
        {
            ll x; cin >> x; mp[x] = i;
        }
    }
    ll ans = 0, ache = 0, p = 0;
    for(ll i = 1; i <= l; i++)
    {
        ll x; cin >> x;
        if(i == 1)
        {
            ache = mp[x];
            ans++;
        }
        if(i > 1)
        {
            p = mp[x];
            if(p != ache)
            {
                ans++;
                ache = p;
            }
        }

    }
    cout << ans << endl;
    return;









}

int main()
{
    ll t; cin >> t;

    while(t--)

    {

        baal();
    }




}



