#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n; ll sq = (ll)sqrt(n), s = 0;
    for(ll i = 1; i < sq; i++)
    {
        if(n % i == 0)
        {
            s += i;
            s += (n / i);
        }
    }
    if(n % sq == 0)
    {

        if(sq * sq == n)
        {
            s += sq;
        }
        else
        {
            s += sq;
            s += (n / sq);
        }

    }
    s -= n;
    if(s == n)
        return cout << "YES\n", 0;

    return cout << "NO\n", 0;



}


