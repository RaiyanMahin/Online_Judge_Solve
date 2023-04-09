#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 
    ll n; cin >> n; ll a[n + 1] = {0};
    ll mx = -1;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx , a[i]);
    }
    sort(a, a + n);
    reverse(a, a + n);
    if(n & 1)
    {
         cout << (n / 2) << '\n';
         for(ll i = 0; i < (n / 2); i++)
         {
             cout << a[i] << ' ' << a[n - i - 1] << ' ';
         }
         cout << a[n/2 ];
         cout << '\n';
 
 
 
 
 
    }
    if(n % 2 == 0)
    {
        cout << (n - 1) / 2 << '\n';
         for(ll i = 0; i < (n / 2); i++)
         {
             cout << a[i] << ' ' << a[n - i - 1] << ' ';
         }
 
         cout << '\n';
 
 
 
    }
}