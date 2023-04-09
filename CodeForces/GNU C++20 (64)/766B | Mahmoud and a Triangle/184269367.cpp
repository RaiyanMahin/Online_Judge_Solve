#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n; ll a[n + 10]; ll f = 0;
    for(ll i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(ll i = 0; i < n - 2; i++)
    {
      if(a[i] + a[i + 1] > a[i + 2])
      {
          f = 1;
          break;
      }
    }
    if(f) cout << "Yes\n";
    else cout << "No\n";
 
}