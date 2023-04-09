#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
/*
 
Input:
5
3 8 2 1 5
 
Output:
2
 
 
*/
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
 
 
   sort(a.begin(), a.end());
   ll s = 0;
   ll last = n - 1;
   for(ll i = 0; i < n - 1; i++)
   {
       s += a[i];
   }
   double p = s * 1.0 / last * 1.0;
   long double pp = (double)p + (double)a[n - 1];
   cout << fixed << setprecision(10) << pp << endl;
   return;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}