#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n, k; cin >> n >> k; ll S = 0;
    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 1; j <= k; j++)
        {
            string s = "";
            char I = i + '0', J = j + '0';
            s += I;
            s += '0';
            s += J;
           // cout << s << endl;
            ll ans = toInt(s);
            S += ans;
        }
    }
    cout << S << endl;






















////    ll t; cin >> t;
////    while(t--)
////    {
////        ll n; cin >> n; vector < ll > a(n, 0); ll mx = INT_MAX;
////        for(auto &i : a)
////        {
////            cin >> i; mx = min(mx, i);
////        }
////        ll s = 0;
////        for(ll i : a)
////            s += (i - mx);
////        cout << s << endl;
////
////    }
}
