#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
ll ch(ll n)
{
    for(ll i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0 )
            return 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n & 1)
        {
            yes;
        }
        else if(! (n & 1))
        {
           if( (n & (n - 1)) == 0 )
           {
               no;
           }
           else
           {
               yes;
           }
 
        }
 
 
 
 
    }
}
 
 
 
 
 
 