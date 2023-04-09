#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll  >a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        a.clear();
        ll n; cin >> n;
        while(n--)
        {
            ll x; cin >> x; a.push_back(x);
        }
        reverse(a.begin(), a.end());
        for(ll i : a)
        {
            cout << i << ' ';
        }
        cout << '\n';
        
    }
}