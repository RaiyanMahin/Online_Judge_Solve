#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        a.clear(); ll n; cin >> n; ll x = (n / 2);
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x; a.push_back(x);
        }
        for(ll i = 0; i < x; i++)
        {
            cout << a[i] << ' ' << a[n - i - 1] << ' ';
        }
        if(n & 1)
        {
            cout << a[n / 2];
        }
        cout << endl;
 
 
    }
 
 
}