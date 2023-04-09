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
        ll n; cin >> n;
        double r = round(sqrt(n));
        ll R = (ll)r;
        if(R * R >= n)
            cout << R << endl;
        else
            cout << R + 1 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    }
 
 
 
 
}
 