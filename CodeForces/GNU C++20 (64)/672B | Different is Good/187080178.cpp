 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n; string s; cin >> s;
    map < char , ll > mp;
    for(char i : s)
    {
       mp[i]++;
    }
    ll mx = -1, su = 0;
    for(auto i : mp)
    {
        mx = max(mx , i.second);
        if(i.second > 1)
        {
            su += (i.second - 1);
        }
    }
    if(mp.size() == n)
        return cout << 0, 0;
    if(mp.size() == 26 and n > 26)
    {
        return cout << -1, 0;
 
    }
    if(mp.size() == 26 and mx > 1)
    {
        return cout << -1, 0;
 
    }
 
    if(mp.size() < 26 and mx > 26)
        return cout << -1 , 0;
        
        
    if((ll)mp.size() + su > 26)
    {
        return cout << -1 , 0;
        
    }
    
    
    
    else
        return cout << abs(n - (ll)mp.size()), 0;
 
 
}