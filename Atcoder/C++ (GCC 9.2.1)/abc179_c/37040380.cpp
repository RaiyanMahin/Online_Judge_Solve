#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll s = 0;
    for(ll i = 1; i <= n; i++)
    {
        s += (n - 1) / i;
    }
    cout << s;
}
