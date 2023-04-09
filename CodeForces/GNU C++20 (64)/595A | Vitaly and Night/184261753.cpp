#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m ; cin >> n >> m;
    ll d = m * 2; ll a[d];
    ll D = d;
    ll cnt = 0;
    while(n--)
    {
       for(ll i = 0; i < d; i++)
       {
           cin >> a[i];
       }
       for(ll j = 0; j < D; j += 2)
       {
           if(a[j] == 1 or a[j + 1] == 1)
           {
               cnt++;
           }
       }
    }
    cout << cnt;
 
}