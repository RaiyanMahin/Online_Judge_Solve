#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

ll baal(ll n)
{
    for(ll i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
            return -1;
    }
    return 1;
}

int main()
{
    ll n; cin >> n;
    if(n == 1 )
        return cout << 0, 0;
    if(n == 2 )
        return cout << 1, 0;
    if(n > 2)
    {
        if(n % 2 == 0)
        {
            return cout << 0, 0;
        }
        if(n & 1)
        {
            ll ans = baal(n);
            cout << ( ans == 1 ? "1" : "0") << endl;
        }

    }


}



