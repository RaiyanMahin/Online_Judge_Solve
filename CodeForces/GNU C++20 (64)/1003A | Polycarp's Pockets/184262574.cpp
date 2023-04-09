#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   ll n; cin >> n; ll a[n];
   vector <ll > rm;
   vector <ll>r;
   for(ll i = 0 ; i < n; i++)
   {
       cin >> a[i];
       rm.push_back(a[i]);
   }
   for(ll i = 0; i < n; i++)
   {
       ll d = count(rm.begin(),rm.end(),a[i]);
       r.push_back(d);
   }
   sort(r.rbegin(),r.rend());
   cout << r[0] << '\n';
 
}