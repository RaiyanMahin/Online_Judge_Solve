#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

void baal()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if( (a + c == 180) and (b + d == 180) )
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
}


