#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; vector < ll > a(n);
        for(auto &i : a)
            cin >> i;
        for(ll i = 1; i < a.size(); i++)
        {
            a[i] += a[i - 1];
        }
        ll mn = 1e9;
        for(auto i : a)
        {
            mn = min(mn, i);
        }
        cout << abs(mn) << endl;
        a.clear();
 
    }
}