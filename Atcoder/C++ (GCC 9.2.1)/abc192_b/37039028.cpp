#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s; ll x = s.size();
    ll u = 0, l = 0;
    for(ll i = 0; i < x; i++)
    {
        if(i % 2 == 0)
        {
            if(s[i] >= 97 and s[i] <= 122)
                l++;
        }
        else if(i & 1)
        {
            if(s[i] >= 65 and s[i] <= 90)
                u++;
        }
    }
    if(l + u == x)
        return cout << "Yes", 0;
    cout << "No";






}
