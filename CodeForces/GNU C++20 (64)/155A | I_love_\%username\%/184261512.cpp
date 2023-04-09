#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
int main()
{
   ll n; cin >> n;
   ll cnt = 0;
   ll a[n + 10];
   //ll x = 0;
   for(ll i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   ll y = a[0];
   ll x = a[0];
   for(ll i = 0; i < n - 1; i++)
   {
       if(a[i] < a[i + 1] and x < a[i + 1])
       {
           cnt++;
           x = a[i + 1];
 
 
       }
       if(a[i] > a[i + 1] and a[i + 1] < y)
       {
           cnt++;
           y = a[i + 1];
       }
   }
   cout << cnt;
}