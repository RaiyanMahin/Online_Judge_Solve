#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    // another acc 5 min :D
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        string s; cin >> s;
        ll x = count(s.begin(), s.end(), '0');
        ll y = count(s.begin(), s.end(), '1');
        if(x <= y)
        {
            string ans(n , '1');
            cout << ans << '\n';
        }
        if(x > y)
        {
            string ans(n , '0');
            cout << ans << '\n';
 
        }
 
 
    }
}