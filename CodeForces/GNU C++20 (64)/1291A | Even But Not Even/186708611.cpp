 
 
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        string s; cin >> s;
        a.clear();
        ll e = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            ll x = s[i] - '0';
            if(x & 1)
                a.push_back(x);
 
        }
        if(a.size() < 2)
            cout << "-1\n";
        else
        {
            cout << a[0] << a[1] << '\n';
        }
 
    }
 
}
 