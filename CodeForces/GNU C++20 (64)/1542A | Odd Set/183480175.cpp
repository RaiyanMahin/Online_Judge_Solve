#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
 
 
 
int main()
{
    ll tc; cin >> tc;
    while(tc--)
    {
        ll n; cin >> n; ll c = 0, cc = n; n *= 2;
        while(n--)
        {
            ll x; cin >> x;
            if(x & 1)
                c++;
        }
        if(c == cc)
            cout << "YES\n";
        else
            cout << "NO\n";
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
 
 
 
 
}