 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n, mx = -1; cin >> n; map < ll, ll > mp; vector < ll > rev;
    for(ll i = 0; i < n; i++)
    {
        ll x; cin >> x; mp[x]++;
        mx = max(mx , mp[x]);
    }
    if(mx > 2)
        return cout << "NO" , 0;
 
    cout << "YES\n" << mp.size() << endl;
    for(auto i : mp)
    {
        cout << i.first << ' ';
        if(i.second == 2)
        {
            rev.push_back(i.first);
        }
 
    }
    cout << endl << rev.size() << endl;
    sort(rev.rbegin(), rev.rend());
    for(ll i : rev)
        cout << i << ' ';
    cout << endl;
 
 
}