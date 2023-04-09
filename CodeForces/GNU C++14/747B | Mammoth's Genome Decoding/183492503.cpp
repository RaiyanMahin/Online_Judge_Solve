#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; string s; cin >> n >> s; string ss = "";
    if(n % 4 != 0)
        return cout << "===\n" , 0;
    ll ans = n / 4;
    ll c_A = count(s.begin() , s.end(), 'A');
    ll c_C = count(s.begin() , s.end(), 'C');
    ll c_T = count(s.begin() , s.end(), 'T');
    ll c_G = count(s.begin() , s.end(), 'G');
    ll c_X = count(s.begin() , s.end(), '?');
    if(c_A > ans or c_C > ans or c_T > ans or c_G > ans)
        return cout << "===\n", 0;
    ll a1 = ans - c_A;
    ll c1 = ans - c_C;
    ll t1 = ans - c_T;
    ll g1 = ans - c_G;
    if(c_X != (a1 + c1 + t1 + g1))
    {
        return cout << "===\n", 0;
    }
    if(c_X == (a1 + c1 + t1 + g1))
    {
        for(ll i = 0; i < s.size(); i++)
        {
 
            if(s[i] == '?')
            {
                if(a1)
                {
                    s[i] = 'A';
                    //cout << "eta s " << s << '\n';
                    a1--;
                }
                else if(c1)
                {
                    s[i] = 'C';
                    //cout << "eta s " << s << '\n';
                    c1--;
                }
               else if(t1)
                {
                    s[i] = 'T';
                    //cout << "eta s " << s << '\n';
                    t1--;
                }
               else if(g1)
                {
                    s[i] = 'G';
                   // cout << "eta s " << s << '\n';
                    g1--;
                }
 
            }
 
        }
        cout << s << '\n';
        return 0;
    }
 
 
 
 
}