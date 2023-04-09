#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll > odd , even , a , b;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    for(ll i = 0; i < n; i++)
    {
        ll x; cin >> x; a.push_back(x);
        if(x & 1)
            odd.push_back(x);
        else
            even.push_back(x);
 
 
    }
    ll s = accumulate(a.begin(), a.end(), 0LL);
    ll s1 = odd.size(), s2 = even.size();
    sort(a.rbegin(), a.rend()); sort(odd.rbegin(), odd.rend()); sort(even.rbegin(), even.rend());
    if(!odd.size() or !even.size() )
    {
        return cout << (s - a[0]) , 0;
 
    }
    if(n & 1)
    {
        if(  ( s1 == s2 + 1 ) or (s2 == s1 + 1) )
            return cout << 0,0;
    }
    if(! (n & 1))
    {
        if(s1 == s2)
            return cout << 0, 0;
    }
    ll M = min(s1 , s2);
    if(M == s1)
    {
        ll ans = accumulate(odd.begin(), odd.end(), 0LL);
        ll ans2 = accumulate(even.begin(), even.begin() + M + 1, 0LL);
        cout << s - ans - ans2;
 
    }
    if(M == s2)
    {
        ll ans = accumulate(even.begin(), even.end(), 0LL);
        ll ans2 = accumulate(odd.begin(), odd.begin() + M + 1, 0LL);
        cout << s - ans - ans2;
 
    }
 
}