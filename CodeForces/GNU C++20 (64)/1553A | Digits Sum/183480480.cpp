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
        string s = to_string(n);  ll x = s.size();
        if(s[x - 1] == '9')
        {
            cout << (n / 10) + 1 << endl;
        }
        else
            cout << (n / 10) << endl;
 
 
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}