 
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
ll n , m;
string s , t;
ll ch(string s, string S)
{
    ll cc = 0;
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] != S[i])
        {
            cc++;
        }
    }
    return cc;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m >> s >> t; ll oo = 0, mn = 1005;
    string ans = "";
    for(ll i = 0; i < m - n + 1; i++)
    {
 
            string S = t.substr(i , n);
            oo = ch(s , S);
            if(oo < mn)
            {
                mn = oo;
                ans = S;
            }
 
 
    }
    cout << mn << endl;
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] != ans[i])
            {
                cout << i + 1 << ' ';
            }
        }
        return 0;
 
 
}