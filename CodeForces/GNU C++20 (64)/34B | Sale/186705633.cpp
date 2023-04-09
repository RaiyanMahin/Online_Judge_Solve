#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n,m; cin >> n >> m; ll a[n + 10];
    for(ll i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    ll s = 0;
    for(ll i = 0; i < m; i++)
    {
        if(a[i] < 0)
            s += a[i];
 
    }
    cout << abs(s) << '\n';
}