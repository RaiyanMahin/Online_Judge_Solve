#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; vector < ll > a(2 * n, 0);
        for(auto &i : a)
            cin >> i;
        sort(a.rbegin(), a.rend());
        for(ll i = 0; i < (n); i++)
        {
            cout << a[i] << ' ' << a[2 * n - i - 1] << ' ';
        }
 
        cout << endl;
 
 
 
 
 
 
    }
}