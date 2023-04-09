#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    ll ans = 0;
    for(ll i = 0; i < a.size() - 1; i++)
    {
        ll mn = min(a[i], a[i + 1]);
        ll mx = max(a[i] , a[i + 1]);
        if(mx > 2 * mn)
        {
            while(mn * 2 < mx)
            {
                ans++; mn *= 2;
            }
 
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