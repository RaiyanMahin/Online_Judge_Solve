#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll mx = 1e9, n = 4;
    while(n--)
    {
        ll x; cin >> x; mx = min(mx, x);
    }
    cout << mx;


}

    