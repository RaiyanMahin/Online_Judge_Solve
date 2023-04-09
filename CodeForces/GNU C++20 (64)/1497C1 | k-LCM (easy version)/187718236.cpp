#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll baal(ll n)
{
    ll op = -1;
    for(ll i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            op = 1;
            return i;
 
        }
    }
    if(op == -1)
    {
        return -1;
    }
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n , k; cin >> n >> k;
        if(! (n & 1) )
        {
           ll C = (n / 2);
           if(! ( C & 1) )
           {
               cout << (n / 2) << ' ';
            n -= (n / 2);
            cout << (n / 2) << ' ' << (n / 2) << endl;
           }
           else if (C & 1)
           {
               cout << C - 1 << ' ' << C - 1 << ' ' << 2 << endl;
 
           }
        }
        else if(n & 1)
        {
           cout << (n / 2) << ' ' << (n / 2) << ' ' << 1  << endl;
        }
 
 
    }
}