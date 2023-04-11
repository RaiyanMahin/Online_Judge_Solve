#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
map < ll, ll > mp;
void baal()
{
    mp.clear();
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
    {
        cin >> i; mp[i]++;
    }
    ll sz = mp.size();
    ll ans = 0;

    for(auto i : mp)
    {
        ll ff = i.first, ss = i.second;

        if(ss == 1)
        {
            ans += (n - 1);
        }
        if(ss > 1)
        {
            ll p = (n - ss) * ss;
            ans += p;
        }
    }
    cout << ans << endl; return;












    return;









}

int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}

