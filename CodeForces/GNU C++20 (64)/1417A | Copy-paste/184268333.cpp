#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        a.clear();
        ll n, k; cin >> n >> k;
        for(ll i = 0; i  <n; i++)
        {
            ll x;  cin >> x;
            a.push_back(x);
        }
        sort(a.rbegin(), a.rend());
        ll mn = *min_element(a.begin(), a.end());
        ll S = 0;
        for(ll i = 0; i  <a.size() - 1; i++)
        {
            ll p = k - a[i];
            S += (p / mn);
        }
        cout << S << '\n';
 
 
 
 
    }
}