#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
 
        string s , t; cin >> s >> t;
        ll ans = -1;
        ll sz1 = s.size(), sz2 = t.size();
        ll lc = (sz1 * sz2) / __gcd(sz1, sz2);
        ll op1 = lc / sz1 , op2 = lc / sz2;
        string S = "", T = "";
        for(ll i = 0; i < op1; i++)
        {
            S += s;
        }
        for(ll i = 0; i < op2; i++)
        {
            T += t;
        }
        if(S == T)
        {
            cout << S << endl;
        }
        else
            cout << "-1\n";
 
 
 
 
    }
}