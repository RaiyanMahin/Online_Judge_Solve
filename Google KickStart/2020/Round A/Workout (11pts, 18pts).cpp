#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector < ll > a;
int main()
{
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
    {
        ll n, k; cin >> n >> k;
        a.clear();
        for(ll i = 0; i < n; i++)
        {
            ll p; cin >> p; a.push_back(p);
        }
        ll mx = -1 , X = 0, Y = 0 ,x = 0, ind = -1;
        for(ll i = 0; i < a.size() - 1; i++)
        {
           mx = max(mx, a[i + 1] - a[i]);
        }
        for(ll i = 0; i < a.size() - 1; i++)
        {
            ll ap = a[i + 1] - a[i];
            if(ap == mx)
            {
                ind = i;
                X = a[i];
                Y = a[i + 1];
                break;
            }
        }
        a.insert(a.begin() + ind  + 1, ( ( X + Y ) / 2));

        ll po = -1;
        for(ll i = 0; i < a.size() - 1; i++)
        {
            po = max(po , a[i + 1] - a[i]);
        }
        cout << "Case #" << i << ": " << po << '\n';

    }
}
// cout << "Case #" << i << ": " <<  << '\n';
