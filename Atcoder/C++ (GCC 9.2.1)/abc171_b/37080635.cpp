#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, k; cin >> n >> k;
    ll s = 0;
    ll a[n + 10] = {0};
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(ll i = 0; i < k; i++)
        s += a[i];
    cout << s;
}