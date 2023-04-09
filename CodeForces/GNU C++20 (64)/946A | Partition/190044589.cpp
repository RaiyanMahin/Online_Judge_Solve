 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n; ll a[n], x = 0, y = 0;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] >= 0)
        {
            x += a[i];
        }
        if(a[i] < 0)
        {
            y += a[i];
        }
    }
    cout << x - y << '\n';
 
 
}