#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n % 2050 )
            cout << "-1\n";
        else if(n % 2050 == 0)
        {
            ll cc = (n / 2050);
            ll ans = 0;
            string vv = to_string(cc);
            for(ll i = 0; i < vv.size(); i++)
            {
                if(vv[i] >= '1' and vv[i] <= '9')
                {
                    ans += (vv[i] - '0');
                }
            }
            cout << ans << endl;
 
 
        }
 
    }
}