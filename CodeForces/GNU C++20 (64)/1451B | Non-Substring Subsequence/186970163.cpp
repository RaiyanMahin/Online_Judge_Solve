#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n , q; cin >> n >> q; string s; cin >> s;
 
        while(q--)
        {
            ll ok = 0;
            ll L , R; cin >> L >> R; L--; R--;
            string ss = "";
            for(ll i = L; i <= R; i++)
            {
                ss += s[i];
            }
 
            char l = s[L], r = s[R];
            
            for(ll i = 0; i < L; i++)
            {
                if(s[i] == l)
                {
                    ok = 1;
                    break;
                }
            }
            for(ll i = R + 1; i < s.size(); i++)
            {
                if(s[i] == r)
                {
                    ok = 1;
                    break;
                }
            }
            cout << (ok ? "YES\n" : "NO\n") ;
            ok = 0;
 
        }
    }
}
 
 
 
 