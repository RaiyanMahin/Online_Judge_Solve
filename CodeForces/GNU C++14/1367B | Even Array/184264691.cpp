#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while(t--)
    {
       ll n; cin >> n;
       ll a[n + 10] = {0};
       ll odd = 0, ee = 0;
       for(ll i = 0; i < n; i++)
       {
           cin >> a[i];
           if(a[i] & 1)
           {
               odd++;
           }
           else{
            ee++;
           }
 
       }
       if(n == 1)
       {
           if(a[0] % 2 != 0)
           {
               cout << -1 << '\n';
           }
           if(a[0] % 2 == 0)
           {
               cout << 0 << '\n';
           }
       }
       if(n > 1)
       {
           if(n & 1)
           {
               if(ee - 1 != odd)
               {
                   cout << -1 << '\n';
               }
               if(ee - 1 == odd)
               {
                   ll cnt = 0;
                   for(ll i = 0; i < n; i++)
                   {
                       ll x = a[i] % 2;
                       ll y = i % 2;
                       if(x != y)
                       {
                           cnt++;
                       }
                   }
                   cout << cnt / 2 << '\n';
                   cnt = 0;
               }
           }
           if(! (n  &  1) )
           {
               if(ee != odd)
               {
                   cout << -1 << '\n';
               }
               if(ee == odd)
               {
                   ll cnt = 0;
                   for(ll i = 0; i < n; i++)
                   {
                       ll x = a[i] % 2;
                       ll y = i % 2;
                       if(x != y)
                       {
                           cnt++;
                       }
                   }
                   cout << cnt / 2 << '\n';
                   cnt = 0;
 
               }
           }
 
       }
 
    }
}