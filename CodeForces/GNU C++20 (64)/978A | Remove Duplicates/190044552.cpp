#include <bits/stdc++.h>
using ll = long long;
using namespace std;
vector < ll > v, vv;
unordered_set < ll > ss;
int main()
{
    ll n; cin >> n;
    while(n--)
    {
        ll x; cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    for(ll i = 0; i < v.size(); i++)
    {
        if( ss.count(v[i]) == 0 )
        {
            ss.insert(v[i]);
            vv.push_back(v[i]);
        }
    }
    cout << vv.size() << '\n';
    reverse(vv.begin() , vv.end());
    for(auto i : vv)
        cout << i << ' ';
 
    cout << '\n';
}