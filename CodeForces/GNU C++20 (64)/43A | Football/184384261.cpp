#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map < string , ll > mp;
int main()
{
    ll n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        mp[s]++;
 
    }
    ll mx = 0;
    for(auto i : mp)
        mx = max(mx, i.second);
    for(auto i : mp)
    {
        if(mx == i.second)
        {
            return cout << i.first << '\n', 0;
        }
    }
 
 
}