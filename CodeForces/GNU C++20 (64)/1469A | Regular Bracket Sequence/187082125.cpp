#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        string s; cin >> s; ll n = s.size();
        if(n & 1 or s == ")(")
        {
            NO;
        }
        else
        {
            ll c1 = -1, c2 = -1, ans = 0;
            ll l1 = 105,  r1 = 105;
            // c1 = ( , c2 = ) , c3 = ?
            for(ll i = 0; i < n; i++)
            {
                if(s[i] == '(')
                {
                    c1 = i;
                }
                else if(s[i] == ')')
                {
                    c2 = i;
                }
            }
            for(ll i = 0; i < n; i++)
            {
                if(s[i] == '?')
                {
                    l1 = i;
                    break;
                }
            }
            for(ll i = n - 1; i >= 0; i--)
            {
                if(s[i] == '?')
                {
                    r1 = i;
                    break;
                }
            }
 
            if(c2 > c1 and !ans)
            {
                YES;
                ans = 1;
            }
            else if(c2 < c1 and !ans)
            {
                if( l1  < c2 and c1 < r1)
                {
                    YES;
                    ans = 1;
                }
                else
                {
                    NO;
                }
 
 
            }
 
        }
 
 
 
 
 
 
 
 
 
 
 
 
 
    }
}