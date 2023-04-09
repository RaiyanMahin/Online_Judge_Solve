#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n,m; cin >> n >> m;
    string s; cin >> s;
    while(m--)
    {
        ll l ,r; cin >> l >> r;
        char a,b; cin >> a >> b;
        l--; r--;
        for(ll i = l; i <= r ; i++ )
        {
            if(s[i] == a)
            {
                s[i] = b;
            }
        }
    }
    cout << s;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}