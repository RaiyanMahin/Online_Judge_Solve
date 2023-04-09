#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ch(ll n)
{
    ll s = 0;
    while(n)
    {
        s += (n % 10);
        n /= 10;
 
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll m = n , s = 0;
    while(m)
    {
       s += (m % 10);
       m /= 10;
 
    }
    if(! ( s % 4) )
        return cout << n ,0;
    while(true)
    {
        n++;
        ll x = ch(n);
        if(x % 4 == 0)
        {
            return cout << n , 0;
        }
 
    }
}