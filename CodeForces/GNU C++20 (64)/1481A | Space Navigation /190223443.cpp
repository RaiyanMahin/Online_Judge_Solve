#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll x, y; cin >> x >> y; string s; cin >> s;
        ll cL = 0, cU = 0, cR = 0, cD = 0;
        for(char i : s)
        {
            if(i == 'L')
                cL++;
            else if(i == 'U')
                cU++;
            else if(i == 'D')
                cD++;
            else if(i == 'R')
                cR++;
        }
        ll bb = -1;
        if(x >= 0 and y >= 0)
        {
            if(cR >= x and cU >= y)
            {
                bb = 1; yes;
            }
 
        }
        else if(x < 0 and y < 0)
        {
            ll op = abs(x), op2 = abs(y);
            if(cL >= op and cD >= op2)
            {
 
                bb = 1;
                yes;
 
            }
        }
        else if(x >= 0 and y < 0)
        {
            ll i = abs(y);
            if(cR >= x and cD >= i)
            {
                bb = 1; yes;
            }
        }
        else if(x < 0 and y >= 0)
        {
            ll i = abs(x);
            if(cL >= i and cU >= y)
           {
                bb = 1; yes;
 
            }
        }
        if(bb == -1)
        {
           no;
 
        }
 
 
 
 
 
 
 
    }
}
 
 
 
 
 
 
 
 
 
 
 