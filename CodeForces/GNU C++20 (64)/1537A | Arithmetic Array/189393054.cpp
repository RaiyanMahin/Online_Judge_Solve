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
        ll n; cin >> n; vector < ll > a(n , 0); ll s = 0;
        for(auto &i : a)
        {
            cin >> i; s += i;
        }
        if(s <= 0)
            cout << "1\n";
 
        if(s > 0)
        {
            if(s == n)
                cout << "0\n";
            if(s > n)
                cout << abs(s - n) << endl;
            if(s < n)
            {
                cout << "1\n";
            }
        }
 
 
 
 
 
 
 
    }
}
 