#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
int main()
{
    ll n; cin >> n; ll s = 0;
    while(n--)
    {
        ll x; cin >> x;
        if(x > 10)
        {
            s += (x - 10);
        }
    }
    cout << s << endl;





}
