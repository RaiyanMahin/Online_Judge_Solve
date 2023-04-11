#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n;
    if(n == 1)
    {
        return cout << 10, 0;
    }
    ll vag = (n / 2), ft = 10, st = 2;
    for(ll i = 1; i <= vag; i++)
    {
        cout << ft << ' ' << st * i << ' ';
        ft += 10;

    }
    if(n & 1)
    {
        cout << ft << endl;
    }
}



