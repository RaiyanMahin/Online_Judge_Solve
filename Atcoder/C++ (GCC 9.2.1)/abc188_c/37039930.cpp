#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll n; cin >> n; n = (ll) pow(2LL, n); vector < ll > a(n);
    for(auto &i : a)
    {
        cin >> i;
    }
    ll mx1 = -1, mx2 = -1;
    for(ll i = 0; i < a.size() / 2; i++)
    {
        mx1 = max(mx1, a[i]);

    }
    for(ll i = a.size() / 2; i < a.size(); i++)
    {
        mx2 = max(mx2, a[i]);

    }
    if(mx1 > mx2)
    {
        for(ll i = a.size() / 2; i < a.size(); i++)
        {
            if(a[i] == mx2)
            {
                return cout << i + 1, 0;
            }

        }
    }
    for(ll i = 0; i < a.size() / 2; i++)
        {
            if(a[i] == mx1)
            {
                return cout << i + 1, 0;
            }

        }



}
