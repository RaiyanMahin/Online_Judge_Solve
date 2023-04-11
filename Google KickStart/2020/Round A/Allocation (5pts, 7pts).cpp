#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll t; cin >> t; ll r = 1;
    while(t--)
    {
       ll n , k ; cin >> n >> k; vector < ll > a(n , 0);
       for(auto &i : a)
       {
           cin >> i;
       }
       sort(a.begin(), a.end());
       ll cnt = 0;
       for(ll i = 0; i < n ; i++)
       {
           if(a[i] <= k)
           {
               cnt++;
               k -= a[i];

           }
       }
       cout << "Case #" << r++ << ": " << cnt << endl;

    }

}
