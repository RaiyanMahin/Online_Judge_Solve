#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map < ll ,ll > mp;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        mp.clear();
        ll n; cin >> n; ll a[n + 1] = {0};
        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
 
        }
        ll vv = 0;
        for(auto i : mp)
        {
            if(i.second == 1)
            {
                vv = i.first;
                break;
            }
        }
        for(ll i = 1; i <= n; i++)
        {
            if(a[i] == vv)
            {
                cout << i << '\n';
                break;
            }
        }
 
 
    }
}