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
        ll n; cin >> n;
        string s = to_string(n);
        ll mx = 1 ;
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] != '0' and s[i] != '1')
            {
                ll op = s[i] - '0';
                mx = max(mx, op);
            }
 
        }
        cout << mx << endl;
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}