#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
   ll n, m; cin >> n >> m; ll a[n + 1] = {0};
   for(ll i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   ll pref[n + 1] = {0};
   pref[0] = a[0];
   for(ll i = 1; i < n; i++)
   {
       pref[i] = pref[i - 1] + a[i];
   }
   while(m--)
   {
       ll x; cin >> x;
 
       auto it = lower_bound(pref, pref + n, x) - pref;
       ll ff = (it) + 1;
       cout << ff << ' ';
       if(ff == 1)
       {
           cout << x << endl;
       }
       if(ff > 1)
       {
           ll op = abs(x - pref[it - 1]);
           cout << op << endl;
       }
 
   }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
 
int main()
{
    ll t = 1; //cin >> t;
    while(t--)
        baal();
}