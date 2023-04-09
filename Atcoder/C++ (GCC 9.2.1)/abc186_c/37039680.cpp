#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
ll ch(ll n, ll base)
{
    while(n)
    {
        ll o = n % base;
        if(o == 7)
            return 0;
        n /= base;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
    {
        ll j = ch(i, 10);
        ll k = ch(i , 8);
        if(j == 0 or k == 0)
            ans++;

    }
    cout << n - ans;


}




