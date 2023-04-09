#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n, d; cin >> n >> d; vector < ll > a(n);
        ll mn = -1;
        for(auto &i : a)
        {
            cin >> i;
            mn = max(mn, i);
 
        }
        if(mn <= d)
            cout << "YES\n";
        else
        {
            sort(a.begin(), a.end());
        ll q = a[0] , Q = a[1];
        if(q + Q <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
        }
 
 
        a.clear();
 
 
 
    }
}