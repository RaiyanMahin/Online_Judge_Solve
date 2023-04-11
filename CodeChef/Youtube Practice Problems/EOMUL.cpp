#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n;
    if(n % 3)
        cout << "-1\n";
    if(n % 3 == 0)
    {
        ll x = (n / 3);
        if(x & 1)
            cout << "1\n";
        else
            cout << "0\n";
    }
}


