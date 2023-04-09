#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < ll > prime;
 
 
 
int main()
{
 
 
    ll t; cin >> t;
    while(t--)
    {
        ll x; cin >> x;
        for(ll i = 3; ;)
        {
 
           ll d =  x % i;
           if(d == 0)
           {
               cout << x / i << '\n';
               break;
           }
           else
           {
               i = (2 * i ) + 1;
           }
 
        }
 
 
 
    }
}