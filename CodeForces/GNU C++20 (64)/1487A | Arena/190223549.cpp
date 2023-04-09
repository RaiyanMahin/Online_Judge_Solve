#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
void baal()
{
    ll n; cin >> n; ll mn = 1e18;  vector < ll > v;
    while(n--)
    {
        ll x; cin >> x;   v.push_back(x);
        mn = min(mn , x);
    }
    ll ans = 0;
    for(ll i : v)
    {
        if(i != mn)
        {
            ans++;
        }
    }
    cout << ans << endl;
 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        baal();
 
 
 
 
 
 
 
 
 
    }
}