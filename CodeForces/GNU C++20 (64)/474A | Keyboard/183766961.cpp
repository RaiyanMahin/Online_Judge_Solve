#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a1 = "qwertyuiop";
string a2 = "asdfghjkl;";
string a3 = "zxcvbnm,./";
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    char d; cin >> d;
    string s; cin >> s;
    string ans = "";
 
 
    // R
    // s;;upimrrfod;pbr
 
    // allyouneedislove
 
    if(d == 'R')
    {
        ll ck = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            ck = 0;
            size_t f1 = a1.find(s[i]);
            size_t f2 = a2.find(s[i]);
            size_t f3 = a3.find(s[i]);
            if(f1 != string::npos and !ck)
            {
                ans += a1[f1 - 1];
                ck = 1;
            }
            else if(f2 != string::npos and !ck)
            {
                ans += a2[f2 - 1];
                ck = 1;
            }
            else if(f3 != string::npos and !ck)
            {
                ans += a3[f3 - 1];
                ck = 1;
            }
            ck = 0;
 
        }
        return cout << ans , 0;
    }
    if(d == 'L')
    {
        ll ck = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            ck = 0;
            size_t f1 = a1.find(s[i]);
            size_t f2 = a2.find(s[i]);
            size_t f3 = a3.find(s[i]);
            if(f1 != string::npos and !ck)
            {
                ans += a1[f1 + 1];
                ck = 1;
            }
            else if(f2 != string::npos and !ck)
            {
                ans += a2[f2 + 1];
                ck = 1;
            }
            else if(f3 != string::npos and !ck)
            {
                ans += a3[f3 + 1];
                ck = 1;
            }
            ck = 0;
 
        }
        return cout << ans , 0;
        
    }
 
 
 
}