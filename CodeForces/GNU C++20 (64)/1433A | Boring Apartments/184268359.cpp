#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; string s = to_string(n); ll ans = 0 , op = (s[0] - '0'), oo = 0, kk = 0;
        ans = ( op - 1) * 10;
        ll x = s.size();
        if(x == 1)
        {
            oo = 1;
        }
        if(x == 2)
        {
             oo = 3;
 
 
        }
        if(x == 3)
        {
           oo = 6;
 
        }
        if(x == 4)
        {
            oo = 10;
 
        }
 
        cout << ans + oo << endl;
 
 
 
    }
}