#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n, k, baal = 0; cin >> n >> k;
    while(n--)
    {
        ll x; cin >> x;
        if(x == k)
            baal++;
    }
    cout << (baal ? "1" : "-1") << endl;


}



