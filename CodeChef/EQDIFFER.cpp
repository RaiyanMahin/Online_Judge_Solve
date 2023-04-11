#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    map < ll, ll> mp; ll n; cin >> n; ll mx = -1;
    for(ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        mp[x]++;
        mx = max(mx, mp[x]);
    }
    mp.clear();
    if(n <= 2)
    {
        cout << 0 << endl;  return;
    }
    if(mx == 1)
        cout << (n - mx) - 1 << endl;
    else
        cout << n - mx << endl; //return;













































    return;

}

int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}


