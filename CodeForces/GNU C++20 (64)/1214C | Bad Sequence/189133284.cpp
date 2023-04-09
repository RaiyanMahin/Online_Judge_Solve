#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n; string s; cin >> s;
    if(n & 1)
        return cout << "NO\n" , 0;
    ll x = count(s.begin(), s.end() , '(');
    ll y = count(s.begin(), s.end() , ')');
    if(x != y)
    {
        return cout << "NO\n" , 0;
 
    }
    ll a = 0, b = 0;
    for(ll i = 0; i < (ll) s.size(); i++)
    {
        if(s[i] == '(')
            a++;
        else if(s[i] == ')')
            b++;
        ll p = b - a;
        if(p > 1)
        {
            return cout << "No\n" , 0;
 
        }
    }
    return cout << "Yes\n" , 0;
 
}