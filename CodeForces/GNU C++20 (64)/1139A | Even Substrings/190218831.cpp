#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int main()
{
    ll n; cin >> n; string s; cin >> s;
    ll e = 0;
    for(char i : s)
    {
        ll x = (i - '0');
        if(!(x & 1))
            e++;
    }
    for(ll i = n - 1; i >= 0; i--)
    {
        ll y = s[i] - '0';
        if(!(y & 1) )
        {
            e += i;
        }
    }
    cout << e;
 
 
}
 
 
 
 