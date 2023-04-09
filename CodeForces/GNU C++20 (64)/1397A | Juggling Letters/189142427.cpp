#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define debug(x)  cout << "eta " << x << ' ' << (x) << '\n'
map < char , ll > mp;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
 
 
        ll n; cin >> n;
        ll m = n;
        while(m--)
        {
            string s; cin >> s;
            for(ll i = 0; i < s.size(); i++)
            {
                mp[s[i]]++;
            }
        }
        ll ans = 0;
        for(auto i : mp)
        {
            //debug(i.first);
            //debug(i.second);
            ll x = i.second;
            if(x % n)
            {
                ans = -1;
                break;
 
            }
        }
 
        if(ans == -1)
        {
            cout << "NO\n";
        }
        if(!ans)
        {
            cout << "YES\n";
        }
        mp.clear();
 
 
 
    }
 
}