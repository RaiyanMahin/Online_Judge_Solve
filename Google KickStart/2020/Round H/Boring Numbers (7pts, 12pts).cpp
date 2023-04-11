#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
ll ch(ll n)
{
    ll A = 0;
    string s = to_string(n);
    for(ll i = 0; i < s.size(); i += 2)
    {
        if ( (s[i] - '0') % 2 == 0 )
        {
            A = 1;
            break;


        }
    }
    for(ll i = 1; i < s.size(); i += 2)
    {
        if ( (s[i] - '0') & 1)
        {
            A = 1;
            break;


        }
    }
    if(A)
        return -1;
    if(!A)
        return 1;
}
int main()
{
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll a , b ,ans = 0;; cin >> a >> b;
        for(ll i = a; i <= b; i++)
        {
            ll x = ch(i);
            if(x == 1)
            {
                ans++;
            }
        }























        cout << "Case " << "#" << r++ << ": " << ans << endl;


    }
}
