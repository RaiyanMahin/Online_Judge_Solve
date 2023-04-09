#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MX 1000
ll a[MX];
queue < ll > b;
int main()
 
{
    //
    ll n, m; cin >> n >> m;
    for(ll i = 1; i <= n; i++)
    {
       cin >> a[i];
    }
    for(ll i = 1; i <= m; i++)
    {
        ll x; cin >> x;
        b.push(x);
    }
    ll cnt = 0;
    bool bb = false;
    while(!b.empty())
    {
        ll k = b.front();
        bb = false;
        for(ll i = 1; i <= n; i++)
        {
            if(k >= a[i])
            {
                bb = true;
                cnt++;
                a[i] = 1010;
                b.pop();
                break;
            }
            if(k < a[i])
            {
                a[i] = 1010;
            }
        }
        if(!bb)
        {
            return cout << cnt , 0;
        }
 
    }
    return cout << cnt , 0;
 
 
 
}