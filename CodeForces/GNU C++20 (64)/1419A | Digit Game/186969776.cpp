#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll TC; cin >> TC;
    while(TC--)
    {
        ll n; cin >> n; string s; cin >> s;
        if(n == 1)
        {
            ll x = s[0] - '0';
            if(x & 1)
                cout << "1\n";
            else
                cout << "2\n";
        }
        if(n > 1)
        {
            if(n % 2 == 0)
            {
                ll c = 0;
                for(ll i = 1; i < s.size(); i += 2)
                {
                    ll p = s[i] - '0';
                    if(p % 2 == 0)
                        c++;
                }
                if(c)
                {
                    cout << "2\n";
                }
                if(!c)
                {
                    cout << "1\n";
                }
            }
            if(n & 1)
            {
                ll c = 0;
                for(ll i = 0; i < s.size(); i += 2)
                {
                    ll p = s[i] - '0';
                    if(p & 1)
                        c++;
                }
                if(c)
                {
                    cout << "1\n";
                }
                if(!c)
                {
                    cout << "2\n";
                }
 
            }
 
 
 
 
        }
 
 
    }
}