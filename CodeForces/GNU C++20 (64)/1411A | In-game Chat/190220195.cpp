#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n ; cin >> n; string s; cin >> s; ll cnt = 0, i;
        for(i = n - 1; i >= 0; i--)
        {
            if(s[i] == ')')
            {
                cnt++;
 
            }
            else if(s[i] != ')')
                break;
        }
        ll x = n - cnt;
        if(cnt > x)
            cout << "Yes\n";
        if(cnt <= x)
            cout << "No\n";
 
 
    }
}