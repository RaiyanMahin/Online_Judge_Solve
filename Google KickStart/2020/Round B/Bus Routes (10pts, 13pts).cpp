#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll n, d; cin >> n >> d;
        ll a[n + 10]; 
        for(ll i = 0; i < n; i++)
            cin >> a[i];

        for(ll i = n - 1; i >= 0; i--)
        {
          ll x = d / a[i];
          d = a[i] * x;  
        }
        //Case #1: 6
        printf("Case #%lld: %lld\n", r++,d);
    }
}
