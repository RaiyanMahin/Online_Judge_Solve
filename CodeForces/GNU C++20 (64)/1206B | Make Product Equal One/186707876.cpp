#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long;
using namespace std;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
   ll n; cin >> n; ll a[n + 10];
   ll mn = 0, d = 0, mm  = 0;
   for(ll i = 0; i < n; i++)
   {
       cin >> a[i];
 
   }
   sort(a, a + n);
   reverse(a, a + n);
   for(ll i = 0; i < n; i++)
   {
       if(a[i] == 0)
       {
          d++;
          mn++;
//           mn++;
//           a[i] = -1;
 
       }
       if(a[i] > 0)
       {
           ll x = a[i] - 1;
           mn += x;
       }
       if(a[i] < 0 )
       {
           mn += abs(a[i]) - 1;
           mm++;
       }
 
   }
   if(!d and mm & 1)
   {
       mn += 2;
   }
   cout << mn;
 
 
 
}