#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
void baal()
{
    ll n; cin >> n;
    vector < ll > a, ev, od;
    while(n--)
    {
        ll x; cin >> x;
        if(x & 1)
            od.push_back(x);
        if(x % 2 == 0)
            ev.push_back(x);
    }
    for(ll i : ev)
        a.push_back(i);
    for(ll i : od)
        a.push_back(i);
    ll ans = 0, sz = (ll)a.size();
    for(ll i = 0; i < sz; i++)
    {
        if(a[i] % 2 == 0)
        {
            ans += (sz - i - 1);
        }
 
    }
    for(ll i = 0; i < (ll)od.size(); i++)
    {
       for(ll j = i + 1; j < (ll)od.size(); j++)
       {
          ll x = __gcd(od[i] , 2 * od[j]);
          if(x > 1)
          {
              ans++;
          }
       }
 
    }
    cout << ans << endl;
    a.clear(); ev.clear(); od.clear();
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