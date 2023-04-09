#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < ll > vp;
ll ch(vector < ll > &vp , ll x)
{
    auto it = find(vp.begin() , vp.end(), x);
    if(it != vp.end())
        return 1;
    if(it == vp.end())
        return -1;
}
ll pre()
{
    for(ll i = 2; i <= 30; i++)
    {
        ll d = (ll)pow(2,i);
        vp.push_back( d );
 
    }
}
 
 
 
int main()
{
 
    pre();
    ll t; cin >> t;
    while(t--)
    {
        ll s = 0, s1 = 0;
        ll x; cin >> x;
        ll ans = x / 2;
        if(ans % 2 == 1)
            cout << "NO\n";
        if(ans % 2 == 0)
        {
            cout << "YES\n";
            ll z = x / 2;
 
            for(ll i = 1; i <= z; i++)
            {
                s += 2 * i;
                cout << 2 * i << ' ';
            }
            for(ll i = 1; i <= (z - 1) ; i++)
            {
                s1 += ( 2 * i - 1);
                cout << (2 * i) - 1 << ' ';
            }
            cout << s - s1 << '\n';
 
 
 
        }
 
 
 
 
 
 
    }
}