#include <bits/stdc++.h>
using namespace std;
using ll = long long;
set < ll > ss;
int main()
{
   ll n,m; cin >> n >> m;
   while(n--)
   {
       ll x; cin >> x;
       ll a[x];
       for(ll i = 0; i < x; i++)
       {
           cin >> a[i];
           ss.insert(a[i]);
       }
   }
   if(ss.size() >= m)
   {
       cout << "YES\n";
   }
   else
   {
       cout << "NO\n";
   }
}