#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n, k, c = 0, ans = 0; cin >> n >> k; k = 240 - k;
    for(ll i = 1; i <= n; i++)
    {
        c += (i * 5);
        if(c <= k)
            ans++;
        if(c > k)
            break;
    }
    cout << ans;
 
}