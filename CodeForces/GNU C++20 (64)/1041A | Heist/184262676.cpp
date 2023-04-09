#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n; ll a[n];
    for(ll i = 0;  i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll d = a[0], dd = a[n - 1];
    ll ans = dd - d + 1;
    cout << ans - n;
}