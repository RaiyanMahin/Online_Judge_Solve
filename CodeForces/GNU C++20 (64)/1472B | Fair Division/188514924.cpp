#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        a.clear(); ll n; cin >> n;
        ll s = 0; ll c1 = 0, c2 = 0;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x; a.push_back(x); s += x;
            if(x == 1)
            {
                c1++;
            }
            if(x == 2)
            {
                c2++;
            }
        }
        sort(a.begin(), a.end());
        if(s & 1)
            no;
        if(s % 2 == 0)
        {
            ll o = (ll ) s / 2;
            if(s == 2 and n != 1)
                yes;
            else if(s == 2 and n == 1)
            {
                no;
            }
            else if(s > 2)
            {
                if(o % 2 == 0)
                    yes;
                else if(o % 2 == 1)
                {
 
                    if(c1)
                        yes;
                    else
                        no;
                }
 
            }
        }
 
 
    }
}