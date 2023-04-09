#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
 
        string s; cin >> s; ll p = 0 , q = 0, r = 0, R = 0, ans = 0;
 
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                p++;
 
            }
            else if(s[i] == ')')
            {
 
                if(p)
                {
                    ans++; p--;
                }
 
            }
            else if(s[i] == '[')
            {
                r++;
            }
            else if(s[i] == ']')
            {
                if(r)
                {
                    ans++; r--;
                }
 
            }
 
 
        }
        cout << ans << endl;
    }
}