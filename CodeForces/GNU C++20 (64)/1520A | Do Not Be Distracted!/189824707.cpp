#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map < char, ll > mp;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        mp.clear();
        ll n; cin >> n; string s; cin >> s;
        ll boo = 0;
        mp[s[0]]++;
        for(ll i = 1; i < n; i++)
        {
            if(!mp[s[i]])
            {
                mp[s[i]]++;
            }
            else if(mp[s[i]])
            {
                if(s[i] != s[i - 1])
                {
                    boo = 1;
                    break;
                }
            }
 
        }
        cout << (boo ? "NO" :"YES") << endl;
    }
}