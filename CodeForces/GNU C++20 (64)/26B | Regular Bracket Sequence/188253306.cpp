#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
 
int main()
{
    string s; cin >> s; ll x = s.size();
    ll a = 0, b = 0, ans = 0;
    for(ll i = 0; i < x; i++)
    {
 
        if(s[i] == '(')
            a++;
        else if(s[i] == ')')
            b++;
 
        if(b > a)
        {
            ans += (b - a); b = 0, a = 0;
 
        }
    }
    if(a != b)
    {
        ans += abs(a - b);
    }
    cout << x - ans;
 
 
 
 
}