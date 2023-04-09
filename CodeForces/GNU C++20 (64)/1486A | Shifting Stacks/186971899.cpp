#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); //cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll d = 0, s = 0, baal = 0;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x; s += x; d += i;
            if(s < d)
                baal = 1;
        }
        if(!baal)
            cout << "YES\n";
        else
            cout << "NO\n";
 
 
 
 
    }
 
}